/* soapWsSMCServiceSoapProxy.h
   Generated by gSOAP 2.7.15 from Services.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapWsSMCServiceSoapProxy_H
#define soapWsSMCServiceSoapProxy_H
#include "soapH.h"

class SOAP_CMAC WsSMCServiceSoapProxy : public soap
{ public:
	/// Endpoint URL of service 'WsSMCServiceSoapProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	WsSMCServiceSoapProxy();
	/// Constructor with copy of another engine state
	WsSMCServiceSoapProxy(const struct soap&);
	/// Constructor with engine input+output mode control
	WsSMCServiceSoapProxy(soap_mode iomode);
	/// Constructor with engine input and output mode control
	WsSMCServiceSoapProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~WsSMCServiceSoapProxy();
	/// Initializer used by constructors
	virtual	void WsSMCServiceSoapProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Force close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Activity' (returns error code or SOAP_OK)
	virtual	int Activity(_ns4__Activity *ns4__Activity, _ns4__ActivityResponse *ns4__ActivityResponse);

	/// Web service operation 'BrowseResources' (returns error code or SOAP_OK)
	virtual	int BrowseResources(_ns4__BrowseResources *ns4__BrowseResources, _ns4__BrowseResourcesResponse *ns4__BrowseResourcesResponse);

	/// Web service operation 'ClearQueue' (returns error code or SOAP_OK)
	virtual	int ClearQueue(_ns4__ClearQueue *ns4__ClearQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse);

	/// Web service operation 'GetStatusServerInfo' (returns error code or SOAP_OK)
	virtual	int GetStatusServerInfo(_ns4__GetStatusServerInfo *ns4__GetStatusServerInfo, _ns4__GetStatusServerInfoResponse *ns4__GetStatusServerInfoResponse);

	/// Web service operation 'GetThorQueueAvailability' (returns error code or SOAP_OK)
	virtual	int GetThorQueueAvailability(_ns4__GetThorQueueAvailability *ns4__GetThorQueueAvailability, _ns4__GetThorQueueAvailabilityResponse *ns4__GetThorQueueAvailabilityResponse);

	/// Web service operation 'Index' (returns error code or SOAP_OK)
	virtual	int Index(_ns4__Index *ns4__Index, _ns4__SMCIndexResponse *ns4__SMCIndexResponse);

	/// Web service operation 'LockQuery' (returns error code or SOAP_OK)
	virtual	int LockQuery(_ns4__LockQuery *ns4__LockQuery, _ns4__LockQueryResponse *ns4__LockQueryResponse);

	/// Web service operation 'MoveJobBack' (returns error code or SOAP_OK)
	virtual	int MoveJobBack(_ns4__MoveJobBack *ns4__MoveJobBack, _ns4__SMCJobResponse *ns4__SMCJobResponse);

	/// Web service operation 'MoveJobDown' (returns error code or SOAP_OK)
	virtual	int MoveJobDown(_ns4__MoveJobDown *ns4__MoveJobDown, _ns4__SMCJobResponse *ns4__SMCJobResponse);

	/// Web service operation 'MoveJobFront' (returns error code or SOAP_OK)
	virtual	int MoveJobFront(_ns4__MoveJobFront *ns4__MoveJobFront, _ns4__SMCJobResponse *ns4__SMCJobResponse);

	/// Web service operation 'MoveJobUp' (returns error code or SOAP_OK)
	virtual	int MoveJobUp(_ns4__MoveJobUp *ns4__MoveJobUp, _ns4__SMCJobResponse *ns4__SMCJobResponse);

	/// Web service operation 'NotInCommunityEdition' (returns error code or SOAP_OK)
	virtual	int NotInCommunityEdition(_ns4__NotInCommunityEdition *ns4__NotInCommunityEdition, _ns4__NotInCommunityEditionResponse *ns4__NotInCommunityEditionResponse);

	/// Web service operation 'PauseQueue' (returns error code or SOAP_OK)
	virtual	int PauseQueue(_ns4__PauseQueue *ns4__PauseQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse);

	/// Web service operation 'RemoveJob' (returns error code or SOAP_OK)
	virtual	int RemoveJob(_ns4__RemoveJob *ns4__RemoveJob, _ns4__SMCJobResponse *ns4__SMCJobResponse);

	/// Web service operation 'ResumeQueue' (returns error code or SOAP_OK)
	virtual	int ResumeQueue(_ns4__ResumeQueue *ns4__ResumeQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse);

	/// Web service operation 'RoxieControlCmd' (returns error code or SOAP_OK)
	virtual	int RoxieControlCmd(_ns4__RoxieControlCmd *ns4__RoxieControlCmd, _ns4__RoxieControlCmdResponse *ns4__RoxieControlCmdResponse);

	/// Web service operation 'SetBanner' (returns error code or SOAP_OK)
	virtual	int SetBanner(_ns4__SetBanner *ns4__SetBanner, _ns4__SetBannerResponse *ns4__SetBannerResponse);

	/// Web service operation 'SetJobPriority' (returns error code or SOAP_OK)
	virtual	int SetJobPriority(_ns4__SetJobPriority *ns4__SetJobPriority, _ns4__SMCPriorityResponse *ns4__SMCPriorityResponse);

	/// Web service operation 'StopQueue' (returns error code or SOAP_OK)
	virtual	int StopQueue(_ns4__StopQueue *ns4__StopQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse);
};
#endif
