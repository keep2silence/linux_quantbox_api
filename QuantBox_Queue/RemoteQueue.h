#ifndef __REMOTE_QUEUE_H__
#define __REMOTE_QUEUE_H__
#include "MsgQueue.h"

// 需要将zmq和czmq的目录在Additional Include Directories中添加
#ifdef _REMOTE
#include "zmq.h"
#include "czmq.h"
#endif



class CRemoteQueue :
	public CMsgQueue
{
public:
	CRemoteQueue(char* address);
	~CRemoteQueue();

protected:
	virtual void RunInThread();
	virtual void Output(ResponeItem* pItem);

private:

	void*		m_pubisher;

	char		m_Address[1024];
#ifdef _REMOTE
	zctx_t*		m_ctx;
#endif
};
#endif
