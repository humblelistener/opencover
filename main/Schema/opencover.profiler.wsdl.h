﻿
// File generated by Wsutil Compiler version 1.0092 
// This file defines C/C++ functions, callbacks, types that correspond to operations,
// and types specified in WSDL and XSD files processed by WsUtil compiler. The generated 
// type definitions, function and callback declarations can be used with various 
// Web Services APIs either in applications that send and receive requests to and 
// from a running web service, or in the implementation of web services, or in both. 
//
// If Wsutil has generated this file from a WSDL file, the file may contain up to three 
// sets of C/C++ definitions. The first set consists of function declarations that can be 
// used in calling operations on a running web service from client applications. 
// The second set consists of callback declarations that can be used in the 
// implementation of web services.  
// The third set contains definitions C/C++ structures that are used for serialization of 
// C/C++ types to schema types defined in the WSDL file.
//
// The set of function declarations for web services clients may contain the 
// following declaration: 
//
//    HRESULT WINAPI DefaultBinding_ICalculator_Add(
//       __in WS_SERVICE_PROXY* _serviceProxy,
//       __in int a, 
//       __in int b, 
//       __out int* result, 
//       __in WS_HEAP* _heap,
//       __in_opt WS_CALL_PROPERTY* _callProperties,
//       __in const ULONG _callPropertyCount,
//       __in_opt const WS_ASYNC_CONTEXT*_asyncContext,
//       __in_opt WS_ERROR* _error);
//
// This function can be called from an application code to request ICalculator web 
// service to perform operation Add using two integers a and b as input data.
// Once the web service processes this request and sends the result back,
// the result is returned to the caller of this function in the "result" parameter.
// A WS_SERVICE_PROXY must be created using WsCreateServiceProxy() function
// before this proxy function can be invoked.
//
// The set of callbacks for implementation of web services may contain the following 
// definition of a callback: 
//
//    typedef HRESULT (CALLBACK* DefaultBinding_ICalculator_AddCallback) (
//       __in const WS_OPERATION_CONTEXT* _context,
//       __in int a, 
//       __in int b, 
//       __out int* result, 
//       __in const WS_ASYNC_CONTEXT* _asyncContext,
//       __in WS_ERROR* _error); 
//
//    typedef struct DefaultBinding_ICalculatorFunctionTable 
//    {
//         DefaultBinding_ICalculator_AddCallback DefaultBinding_ICalculator_Add;
//    } DefaultBinding_ICalculatorFunctionTable;
//
// This definition can be used to implement a function that defines the Add operation 
// as a part of an ICalculator web service. Once this callback is implemented and 
// the web service is deployed and running, if a client applications attempts to 
// execute the operation Add, the implementation of this callback is called and 
// it receives two integers a and b as input data and it returns a third integer 
// that is the result of the operation. A WS_SERVICE_ENDPOINT must be filled out, 
// and its contract field set to instance of such a function table.  
// WsCreateServiceHost may then be used to register the endpoint as a service.
// 
// The set with definitions of C/C++ structures may contain a definition of the following 
// structure:
//    typedef struct ContactInfo 
//    {
//			WCHAR*  name;
//			WCHAR*  email;
//			__int64 contactID;
//	  } ContactInfo;
//
// This structure corresponds to the following complex type defined in the WSDL file:
//    <s:complexType name="ContactInfo">
//      <s:sequence>
//        <s:element minOccurs="1" maxOccurs="1" name="name" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="email" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="contactID" type="s:long" />
//      </s:sequence>
//    </s:complexType>
//
// For more information about content of this file, please see the documentation for
// Wsutil compiler.
#if _MSC_VER > 1000 
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

// The following client functions were generated:


// The following server function tables were generated:


// The following header files must be included in this order before this one

// #include <WebServices.h>
// #include "opencover.profiler.xsd.h"

////////////////////////////////////////////////
// Global web service descriptions.
////////////////////////////////////////////////

typedef struct _opencover_profiler_wsdl
{
    struct // messages
    {
        // message: IProfilerCommunication_Started_InputMessage
        // c type: _Started
        // action: "urn:opencover.profiler/IProfilerCommunication/Started"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_Started_InputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_InputMessage;
        
        // message: IProfilerCommunication_Started_OutputMessage
        // c type: _StartedResponse
        // action: "urn:opencover.profiler/IProfilerCommunication/StartedResponse"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_Started_OutputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_OutputMessage;
        
        // message: IProfilerCommunication_Stopping_InputMessage
        // c type: _Stopping
        // action: "urn:opencover.profiler/IProfilerCommunication/Stopping"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_Stopping_InputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_InputMessage;
        
        // message: IProfilerCommunication_Stopping_OutputMessage
        // c type: _StoppingResponse
        // action: "urn:opencover.profiler/IProfilerCommunication/StoppingResponse"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_Stopping_OutputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_OutputMessage;
        
        // message: IProfilerCommunication_TrackAssembly_InputMessage
        // c type: _TrackAssembly
        // action: "urn:opencover.profiler/IProfilerCommunication/TrackAssembly"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_TrackAssembly_InputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_TrackAssembly_InputMessage;
        
        // message: IProfilerCommunication_TrackAssembly_OutputMessage
        // c type: _TrackAssemblyResponse
        // action: "urn:opencover.profiler/IProfilerCommunication/TrackAssemblyResponse"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_TrackAssembly_OutputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_TrackAssembly_OutputMessage;
        
        // message: IProfilerCommunication_GetSequencePoints_InputMessage
        // c type: _GetSequencePoints
        // action: "urn:opencover.profiler/IProfilerCommunication/GetSequencePoints"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_GetSequencePoints_InputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_GetSequencePoints_InputMessage;
        
        // message: IProfilerCommunication_GetSequencePoints_OutputMessage
        // c type: _GetSequencePointsResponse
        // action: "urn:opencover.profiler/IProfilerCommunication/GetSequencePointsResponse"
        // messageDescription: opencover_profiler_wsdl.messages.IProfilerCommunication_GetSequencePoints_OutputMessage
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_GetSequencePoints_OutputMessage;
        
    } messages;
} _opencover_profiler_wsdl;

extern const _opencover_profiler_wsdl opencover_profiler_wsdl;

#ifdef __cplusplus
}
#endif

