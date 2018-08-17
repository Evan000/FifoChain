#include "FifoChain.h"

void vFifoChainInit(struct ChainAccessType *pstChainAccess1){
	pstChainAccess1->pstStartNode = 0;
	pstChainAccess1->pstEndNode = 0;
//	pstChainAccess1->uiChainNumber = 0;
}

void vPutFifoChain(struct ChainAccessType *pstChainAccess1,DE_ChainNodeType * pstNewNode){
	if(pstChainAccess1->pstStartNode){//已有节点（非空链表）
		pstChainAccess1->pstEndNode->pNext = pstNewNode;//最后一个节点指向新的节点
		pstChainAccess1->pstEndNode = pstNewNode;//更新最后一个节点
	}else{//没有节点（空链表），加入新节点
		pstChainAccess1->pstEndNode = pstNewNode;
		pstChainAccess1->pstStartNode = pstNewNode;
	}
//	pstChainAccess1->uiChainNumber++;
}

DE_ChainNodeType * pstGetFifoChain(struct ChainAccessType *pstChainAccess1){
	DE_ChainNodeType * pstReturnNode = 0;
	if(pstChainAccess1->pstStartNode){
		pstReturnNode = pstChainAccess1->pstStartNode;
		pstChainAccess1->pstStartNode = pstReturnNode->pNext;
//		pstChainAccess1->uiChainNumber--;
		//return pstReturnNode;
	}/*else{
		return 0;
	}*/
	return pstReturnNode;
}




/************************ (C) COPYRIGHT axushilong@163.com *****END OF FILE****/
