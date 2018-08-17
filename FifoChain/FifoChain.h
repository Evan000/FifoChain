#ifndef _FIFO_CHAIN
#define _FIFO_CHAIN

#define DE_ChainNodeType struct LogNode

struct ChainAccessType{
	DE_ChainNodeType * pstStartNode;
	DE_ChainNodeType * pstEndNode;
//	unsigned int uiChainNumber;
};

//日志节点类型，用于创建日志链表
struct LogNode{
	struct LogNode * pNext;//指向下一个节点
	unsigned short usLength;//当前节点长度
	unsigned char ucFlag;//节点信息标志
	char cStr[1];//指向节点信息
};

extern struct ChainAccessType stLogChain;



void vFifoChainInit(struct ChainAccessType *pstChainAccess1);
void vPutFifoChain(struct ChainAccessType *pstChainAccess1,DE_ChainNodeType * pstNewNode);
DE_ChainNodeType * pstGetFifoChain(struct ChainAccessType *pstChainAccess1);

#endif

/************************ (C) COPYRIGHT axushilong@163.com *****END OF FILE****/
