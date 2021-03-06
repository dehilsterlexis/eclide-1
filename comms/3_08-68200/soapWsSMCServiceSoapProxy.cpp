/* soapWsSMCServiceSoapProxy.cpp
   Generated by gSOAP 2.7.15 from Services.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapWsSMCServiceSoapProxy.h"

WsSMCServiceSoapProxy::WsSMCServiceSoapProxy()
{	WsSMCServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

WsSMCServiceSoapProxy::WsSMCServiceSoapProxy(const struct soap &_soap) :soap(_soap)
{ }

WsSMCServiceSoapProxy::WsSMCServiceSoapProxy(soap_mode iomode)
{	WsSMCServiceSoapProxy_init(iomode, iomode);
}

WsSMCServiceSoapProxy::WsSMCServiceSoapProxy(soap_mode imode, soap_mode omode)
{	WsSMCServiceSoapProxy_init(imode, omode);
}

void WsSMCServiceSoapProxy::WsSMCServiceSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns1", "http://webservices.seisint.com/ws_account", NULL, NULL},
	{"ns2", "urn:hpccsystems:ws:wsattributes", NULL, NULL},
	{"ns3", "urn:hpccsystems:ws:wsdfu", NULL, NULL},
	{"ns4", "urn:hpccsystems:ws:wssmc", NULL, NULL},
	{"ns5", "http://webservices.seisint.com/WsTopology", NULL, NULL},
	{"ns6", "urn:hpccsystems:ws:wsworkunits", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	if (!this->namespaces)
		this->namespaces = namespaces;
}

WsSMCServiceSoapProxy::~WsSMCServiceSoapProxy()
{ }

void WsSMCServiceSoapProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void WsSMCServiceSoapProxy::soap_noheader()
{	header = NULL;
}

const SOAP_ENV__Fault *WsSMCServiceSoapProxy::soap_fault()
{	return this->fault;
}

const char *WsSMCServiceSoapProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *WsSMCServiceSoapProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int WsSMCServiceSoapProxy::soap_close_socket()
{	return soap_closesock(this);
}

void WsSMCServiceSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void WsSMCServiceSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *WsSMCServiceSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int WsSMCServiceSoapProxy::Activity(_ns4__Activity *ns4__Activity, _ns4__ActivityResponse *ns4__ActivityResponse)
{	struct soap *soap = this;
	struct __ns4__Activity soap_tmp___ns4__Activity;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/Activity?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Activity.ns4__Activity = ns4__Activity;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Activity(soap, &soap_tmp___ns4__Activity);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Activity(soap, &soap_tmp___ns4__Activity, "-ns4:Activity", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Activity(soap, &soap_tmp___ns4__Activity, "-ns4:Activity", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ActivityResponse)
		return soap_closesock(soap);
	ns4__ActivityResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ActivityResponse->soap_get(soap, "ns4:ActivityResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::BrowseResources(_ns4__BrowseResources *ns4__BrowseResources, _ns4__BrowseResourcesResponse *ns4__BrowseResourcesResponse)
{	struct soap *soap = this;
	struct __ns4__BrowseResources soap_tmp___ns4__BrowseResources;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/BrowseResources?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__BrowseResources.ns4__BrowseResources = ns4__BrowseResources;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__BrowseResources(soap, &soap_tmp___ns4__BrowseResources);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__BrowseResources(soap, &soap_tmp___ns4__BrowseResources, "-ns4:BrowseResources", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__BrowseResources(soap, &soap_tmp___ns4__BrowseResources, "-ns4:BrowseResources", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__BrowseResourcesResponse)
		return soap_closesock(soap);
	ns4__BrowseResourcesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__BrowseResourcesResponse->soap_get(soap, "ns4:BrowseResourcesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::ClearQueue(_ns4__ClearQueue *ns4__ClearQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse)
{	struct soap *soap = this;
	struct __ns4__ClearQueue soap_tmp___ns4__ClearQueue;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/ClearQueue?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__ClearQueue.ns4__ClearQueue = ns4__ClearQueue;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__ClearQueue(soap, &soap_tmp___ns4__ClearQueue);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__ClearQueue(soap, &soap_tmp___ns4__ClearQueue, "-ns4:ClearQueue", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__ClearQueue(soap, &soap_tmp___ns4__ClearQueue, "-ns4:ClearQueue", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCQueueResponse)
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_get(soap, "ns4:SMCQueueResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::GetThorQueueAvailability(_ns4__GetThorQueueAvailability *ns4__GetThorQueueAvailability, _ns4__GetThorQueueAvailabilityResponse *ns4__GetThorQueueAvailabilityResponse)
{	struct soap *soap = this;
	struct __ns4__GetThorQueueAvailability soap_tmp___ns4__GetThorQueueAvailability;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/GetThorQueueAvailability?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__GetThorQueueAvailability.ns4__GetThorQueueAvailability = ns4__GetThorQueueAvailability;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__GetThorQueueAvailability(soap, &soap_tmp___ns4__GetThorQueueAvailability);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__GetThorQueueAvailability(soap, &soap_tmp___ns4__GetThorQueueAvailability, "-ns4:GetThorQueueAvailability", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__GetThorQueueAvailability(soap, &soap_tmp___ns4__GetThorQueueAvailability, "-ns4:GetThorQueueAvailability", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__GetThorQueueAvailabilityResponse)
		return soap_closesock(soap);
	ns4__GetThorQueueAvailabilityResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__GetThorQueueAvailabilityResponse->soap_get(soap, "ns4:GetThorQueueAvailabilityResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::Index(_ns4__Index *ns4__Index, _ns4__SMCIndexResponse *ns4__SMCIndexResponse)
{	struct soap *soap = this;
	struct __ns4__Index soap_tmp___ns4__Index;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/Index?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Index.ns4__Index = ns4__Index;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Index(soap, &soap_tmp___ns4__Index);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Index(soap, &soap_tmp___ns4__Index, "-ns4:Index", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Index(soap, &soap_tmp___ns4__Index, "-ns4:Index", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCIndexResponse)
		return soap_closesock(soap);
	ns4__SMCIndexResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCIndexResponse->soap_get(soap, "ns4:SMCIndexResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::MoveJobBack(_ns4__MoveJobBack *ns4__MoveJobBack, _ns4__SMCJobResponse *ns4__SMCJobResponse)
{	struct soap *soap = this;
	struct __ns4__MoveJobBack soap_tmp___ns4__MoveJobBack;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/MoveJobBack?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__MoveJobBack.ns4__MoveJobBack = ns4__MoveJobBack;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__MoveJobBack(soap, &soap_tmp___ns4__MoveJobBack);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__MoveJobBack(soap, &soap_tmp___ns4__MoveJobBack, "-ns4:MoveJobBack", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__MoveJobBack(soap, &soap_tmp___ns4__MoveJobBack, "-ns4:MoveJobBack", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCJobResponse)
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_get(soap, "ns4:SMCJobResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::MoveJobDown(_ns4__MoveJobDown *ns4__MoveJobDown, _ns4__SMCJobResponse *ns4__SMCJobResponse)
{	struct soap *soap = this;
	struct __ns4__MoveJobDown soap_tmp___ns4__MoveJobDown;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/MoveJobDown?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__MoveJobDown.ns4__MoveJobDown = ns4__MoveJobDown;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__MoveJobDown(soap, &soap_tmp___ns4__MoveJobDown);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__MoveJobDown(soap, &soap_tmp___ns4__MoveJobDown, "-ns4:MoveJobDown", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__MoveJobDown(soap, &soap_tmp___ns4__MoveJobDown, "-ns4:MoveJobDown", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCJobResponse)
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_get(soap, "ns4:SMCJobResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::MoveJobFront(_ns4__MoveJobFront *ns4__MoveJobFront, _ns4__SMCJobResponse *ns4__SMCJobResponse)
{	struct soap *soap = this;
	struct __ns4__MoveJobFront soap_tmp___ns4__MoveJobFront;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/MoveJobFront?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__MoveJobFront.ns4__MoveJobFront = ns4__MoveJobFront;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__MoveJobFront(soap, &soap_tmp___ns4__MoveJobFront);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__MoveJobFront(soap, &soap_tmp___ns4__MoveJobFront, "-ns4:MoveJobFront", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__MoveJobFront(soap, &soap_tmp___ns4__MoveJobFront, "-ns4:MoveJobFront", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCJobResponse)
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_get(soap, "ns4:SMCJobResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::MoveJobUp(_ns4__MoveJobUp *ns4__MoveJobUp, _ns4__SMCJobResponse *ns4__SMCJobResponse)
{	struct soap *soap = this;
	struct __ns4__MoveJobUp soap_tmp___ns4__MoveJobUp;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/MoveJobUp?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__MoveJobUp.ns4__MoveJobUp = ns4__MoveJobUp;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__MoveJobUp(soap, &soap_tmp___ns4__MoveJobUp);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__MoveJobUp(soap, &soap_tmp___ns4__MoveJobUp, "-ns4:MoveJobUp", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__MoveJobUp(soap, &soap_tmp___ns4__MoveJobUp, "-ns4:MoveJobUp", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCJobResponse)
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_get(soap, "ns4:SMCJobResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::NotInCommunityEdition(_ns4__NotInCommunityEdition *ns4__NotInCommunityEdition, _ns4__NotInCommunityEditionResponse *ns4__NotInCommunityEditionResponse)
{	struct soap *soap = this;
	struct __ns4__NotInCommunityEdition soap_tmp___ns4__NotInCommunityEdition;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/NotInCommunityEdition?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__NotInCommunityEdition.ns4__NotInCommunityEdition = ns4__NotInCommunityEdition;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__NotInCommunityEdition(soap, &soap_tmp___ns4__NotInCommunityEdition);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__NotInCommunityEdition(soap, &soap_tmp___ns4__NotInCommunityEdition, "-ns4:NotInCommunityEdition", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__NotInCommunityEdition(soap, &soap_tmp___ns4__NotInCommunityEdition, "-ns4:NotInCommunityEdition", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__NotInCommunityEditionResponse)
		return soap_closesock(soap);
	ns4__NotInCommunityEditionResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__NotInCommunityEditionResponse->soap_get(soap, "ns4:NotInCommunityEditionResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::PauseQueue(_ns4__PauseQueue *ns4__PauseQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse)
{	struct soap *soap = this;
	struct __ns4__PauseQueue soap_tmp___ns4__PauseQueue;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/PauseQueue?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__PauseQueue.ns4__PauseQueue = ns4__PauseQueue;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__PauseQueue(soap, &soap_tmp___ns4__PauseQueue);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__PauseQueue(soap, &soap_tmp___ns4__PauseQueue, "-ns4:PauseQueue", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__PauseQueue(soap, &soap_tmp___ns4__PauseQueue, "-ns4:PauseQueue", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCQueueResponse)
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_get(soap, "ns4:SMCQueueResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::RemoveJob(_ns4__RemoveJob *ns4__RemoveJob, _ns4__SMCJobResponse *ns4__SMCJobResponse)
{	struct soap *soap = this;
	struct __ns4__RemoveJob soap_tmp___ns4__RemoveJob;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/RemoveJob?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__RemoveJob.ns4__RemoveJob = ns4__RemoveJob;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__RemoveJob(soap, &soap_tmp___ns4__RemoveJob);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__RemoveJob(soap, &soap_tmp___ns4__RemoveJob, "-ns4:RemoveJob", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__RemoveJob(soap, &soap_tmp___ns4__RemoveJob, "-ns4:RemoveJob", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCJobResponse)
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCJobResponse->soap_get(soap, "ns4:SMCJobResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::ResumeQueue(_ns4__ResumeQueue *ns4__ResumeQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse)
{	struct soap *soap = this;
	struct __ns4__ResumeQueue soap_tmp___ns4__ResumeQueue;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/ResumeQueue?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__ResumeQueue.ns4__ResumeQueue = ns4__ResumeQueue;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__ResumeQueue(soap, &soap_tmp___ns4__ResumeQueue);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__ResumeQueue(soap, &soap_tmp___ns4__ResumeQueue, "-ns4:ResumeQueue", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__ResumeQueue(soap, &soap_tmp___ns4__ResumeQueue, "-ns4:ResumeQueue", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCQueueResponse)
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_get(soap, "ns4:SMCQueueResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::SetBanner(_ns4__SetBanner *ns4__SetBanner, _ns4__SetBannerResponse *ns4__SetBannerResponse)
{	struct soap *soap = this;
	struct __ns4__SetBanner soap_tmp___ns4__SetBanner;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/SetBanner?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__SetBanner.ns4__SetBanner = ns4__SetBanner;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__SetBanner(soap, &soap_tmp___ns4__SetBanner);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__SetBanner(soap, &soap_tmp___ns4__SetBanner, "-ns4:SetBanner", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__SetBanner(soap, &soap_tmp___ns4__SetBanner, "-ns4:SetBanner", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SetBannerResponse)
		return soap_closesock(soap);
	ns4__SetBannerResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SetBannerResponse->soap_get(soap, "ns4:SetBannerResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::SetJobPriority(_ns4__SetJobPriority *ns4__SetJobPriority, _ns4__SMCPriorityResponse *ns4__SMCPriorityResponse)
{	struct soap *soap = this;
	struct __ns4__SetJobPriority soap_tmp___ns4__SetJobPriority;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/SetJobPriority?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__SetJobPriority.ns4__SetJobPriority = ns4__SetJobPriority;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__SetJobPriority(soap, &soap_tmp___ns4__SetJobPriority);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__SetJobPriority(soap, &soap_tmp___ns4__SetJobPriority, "-ns4:SetJobPriority", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__SetJobPriority(soap, &soap_tmp___ns4__SetJobPriority, "-ns4:SetJobPriority", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCPriorityResponse)
		return soap_closesock(soap);
	ns4__SMCPriorityResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCPriorityResponse->soap_get(soap, "ns4:SMCPriorityResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WsSMCServiceSoapProxy::StopQueue(_ns4__StopQueue *ns4__StopQueue, _ns4__SMCQueueResponse *ns4__SMCQueueResponse)
{	struct soap *soap = this;
	struct __ns4__StopQueue soap_tmp___ns4__StopQueue;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://192.168.2.203:8010/WsSMC?ver_=1.12";
	soap_action = "WsSMC/StopQueue?ver_=1.12";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__StopQueue.ns4__StopQueue = ns4__StopQueue;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__StopQueue(soap, &soap_tmp___ns4__StopQueue);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__StopQueue(soap, &soap_tmp___ns4__StopQueue, "-ns4:StopQueue", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__StopQueue(soap, &soap_tmp___ns4__StopQueue, "-ns4:StopQueue", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SMCQueueResponse)
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SMCQueueResponse->soap_get(soap, "ns4:SMCQueueResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
