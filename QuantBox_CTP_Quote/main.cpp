#include "../include/ApiHeader.h"

#include "../include/QueueEnum.h"
#include "MdUserApi.h"

inline CMdUserApi* GetApi(void* pApi)
{
	return static_cast<CMdUserApi*>(pApi);
}

void* XRequest(char type, void* pApi1, void* pApi2, double double1, double double2, void* ptr1, int size1, void* ptr2, int size2, void* ptr3, int size3)
{
	RequestType rt = (RequestType)type;
	switch (rt)
	{
	case GetApiType:
		return (void*)(ApiType::MarketData | ApiType::QuoteRequest);
	case GetApiVersion:
		return (void*)"0.2.0.20150226";
	case GetApiName:
		return (void*)"CTP";
	case Create:
		return new CMdUserApi();
	default:
		break;
	}

	if (pApi1 == nullptr)
	{
		return nullptr;
	}

	CMdUserApi* pApi = GetApi(pApi1);

	switch (rt)
	{
	case Release:
		delete pApi;
		return 0;
	case Register:
		pApi->Register(ptr1,ptr2);
		break;
	case Config:
		return (void*)pApi->Config((ConfigInfoField*)ptr1);
	case Connect:
		pApi->Connect((const char*)ptr3, (ServerInfoField*)ptr1, (UserInfoField*)ptr2,size2);
		break;
	case Disconnect:
		pApi->Disconnect();
		break;
	case Subscribe:
		pApi->Subscribe((const char*)ptr1, (const char*)ptr2);
		break;
	case Unsubscribe:
		pApi->Unsubscribe((const char*)ptr1, (const char*)ptr2);
		break;
	case SubscribeQuote:
		pApi->SubscribeQuote((const char*)ptr1, (const char*)ptr2);
		break;
	case UnsubscribeQuote:
		pApi->UnsubscribeQuote((const char*)ptr1, (const char*)ptr2);
		break;
	default:
		break;
	}

	return pApi1;
}
