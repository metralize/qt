// +build !minimal

#pragma once

#ifndef GO_QTSCXML_H
#define GO_QTSCXML_H

#include <stdint.h>

#ifdef __cplusplus
int QScxmlCppDataModel_QScxmlCppDataModel_QRegisterMetaType();
int QScxmlDataModel_QScxmlDataModel_QRegisterMetaType();
int QScxmlDynamicScxmlServiceFactory_QScxmlDynamicScxmlServiceFactory_QRegisterMetaType();
int QScxmlEcmaScriptDataModel_QScxmlEcmaScriptDataModel_QRegisterMetaType();
int QScxmlInvokableService_QScxmlInvokableService_QRegisterMetaType();
int QScxmlInvokableServiceFactory_QScxmlInvokableServiceFactory_QRegisterMetaType();
int QScxmlNullDataModel_QScxmlNullDataModel_QRegisterMetaType();
int QScxmlStateMachine_QScxmlStateMachine_QRegisterMetaType();
int QScxmlStaticScxmlServiceFactory_QScxmlStaticScxmlServiceFactory_QRegisterMetaType();
extern "C" {
#endif

struct QtScxml_PackedString { char* data; long long len; };
struct QtScxml_PackedList { void* data; long long len; };
void* QScxmlCompiler_NewQScxmlCompiler(void* reader);
void* QScxmlCompiler_Compile(void* ptr);
void QScxmlCompiler_SetFileName(void* ptr, struct QtScxml_PackedString fileName);
void QScxmlCompiler_DestroyQScxmlCompiler(void* ptr);
struct QtScxml_PackedString QScxmlCompiler_FileName(void* ptr);
struct QtScxml_PackedList QScxmlCompiler_Errors(void* ptr);
void* QScxmlCompiler___errors_atList(void* ptr, int i);
void QScxmlCompiler___errors_setList(void* ptr, void* i);
void* QScxmlCompiler___errors_newList(void* ptr);
char QScxmlCppDataModel_SetScxmlProperty(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlCppDataModel_SetScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlCppDataModel_Setup(void* ptr, void* initialDataValues);
char QScxmlCppDataModel_SetupDefault(void* ptr, void* initialDataValues);
void QScxmlCppDataModel_SetScxmlEvent(void* ptr, void* event);
void* QScxmlCppDataModel_ScxmlProperty(void* ptr, struct QtScxml_PackedString name);
void* QScxmlCppDataModel_ScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
char QScxmlCppDataModel_HasScxmlProperty(void* ptr, struct QtScxml_PackedString name);
char QScxmlCppDataModel_HasScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
char QScxmlCppDataModel_InState(void* ptr, struct QtScxml_PackedString stateName);
void* QScxmlCppDataModel_ScxmlEvent(void* ptr);
char QScxmlDataModel_SetScxmlProperty(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlDataModel_Setup(void* ptr, void* initialDataValues);
void QScxmlDataModel_SetStateMachine(void* ptr, void* stateMachine);
void QScxmlDataModel_ConnectStateMachineChanged(void* ptr);
void QScxmlDataModel_DisconnectStateMachineChanged(void* ptr);
void QScxmlDataModel_StateMachineChanged(void* ptr, void* stateMachine);
void* QScxmlDataModel_StateMachine(void* ptr);
void* QScxmlDataModel_ScxmlProperty(void* ptr, struct QtScxml_PackedString name);
char QScxmlDataModel_HasScxmlProperty(void* ptr, struct QtScxml_PackedString name);
void* QScxmlDataModel___setup_initialDataValues_atList(void* ptr, struct QtScxml_PackedString i);
void QScxmlDataModel___setup_initialDataValues_setList(void* ptr, struct QtScxml_PackedString key, void* i);
void* QScxmlDataModel___setup_initialDataValues_newList(void* ptr);
struct QtScxml_PackedList QScxmlDataModel___setup_keyList(void* ptr);
struct QtScxml_PackedString QScxmlDataModel_____setup_keyList_atList(void* ptr, int i);
void QScxmlDataModel_____setup_keyList_setList(void* ptr, struct QtScxml_PackedString i);
void* QScxmlDataModel_____setup_keyList_newList(void* ptr);
void* QScxmlDataModel___dynamicPropertyNames_atList(void* ptr, int i);
void QScxmlDataModel___dynamicPropertyNames_setList(void* ptr, void* i);
void* QScxmlDataModel___dynamicPropertyNames_newList(void* ptr);
void* QScxmlDataModel___findChildren_atList2(void* ptr, int i);
void QScxmlDataModel___findChildren_setList2(void* ptr, void* i);
void* QScxmlDataModel___findChildren_newList2(void* ptr);
void* QScxmlDataModel___findChildren_atList3(void* ptr, int i);
void QScxmlDataModel___findChildren_setList3(void* ptr, void* i);
void* QScxmlDataModel___findChildren_newList3(void* ptr);
void* QScxmlDataModel___findChildren_atList(void* ptr, int i);
void QScxmlDataModel___findChildren_setList(void* ptr, void* i);
void* QScxmlDataModel___findChildren_newList(void* ptr);
void* QScxmlDataModel___children_atList(void* ptr, int i);
void QScxmlDataModel___children_setList(void* ptr, void* i);
void* QScxmlDataModel___children_newList(void* ptr);
char QScxmlDataModel_EventDefault(void* ptr, void* e);
char QScxmlDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void QScxmlDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlDataModel_DeleteLaterDefault(void* ptr);
void QScxmlDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
void QScxmlDataModel_TimerEventDefault(void* ptr, void* event);
void* QScxmlDataModel_MetaObjectDefault(void* ptr);
void* QScxmlDynamicScxmlServiceFactory_Invoke(void* ptr, void* parentStateMachine);
void* QScxmlDynamicScxmlServiceFactory_InvokeDefault(void* ptr, void* parentStateMachine);
void* QScxmlDynamicScxmlServiceFactory___QScxmlDynamicScxmlServiceFactory_names_newList(void* ptr);
void* QScxmlDynamicScxmlServiceFactory___QScxmlDynamicScxmlServiceFactory_parameters_newList(void* ptr);
void* QScxmlEcmaScriptDataModel_NewQScxmlEcmaScriptDataModel(void* parent);
char QScxmlEcmaScriptDataModel_SetScxmlProperty(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlEcmaScriptDataModel_SetScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlEcmaScriptDataModel_Setup(void* ptr, void* initialDataValues);
char QScxmlEcmaScriptDataModel_SetupDefault(void* ptr, void* initialDataValues);
void QScxmlEcmaScriptDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_SetScxmlEventDefault(void* ptr, void* event);
void* QScxmlEcmaScriptDataModel_ScxmlProperty(void* ptr, struct QtScxml_PackedString name);
void* QScxmlEcmaScriptDataModel_ScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
char QScxmlEcmaScriptDataModel_HasScxmlProperty(void* ptr, struct QtScxml_PackedString name);
char QScxmlEcmaScriptDataModel_HasScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
void* QScxmlError_NewQScxmlError();
void* QScxmlError_NewQScxmlError3(void* other);
void* QScxmlError_NewQScxmlError2(struct QtScxml_PackedString fileName, int line, int column, struct QtScxml_PackedString description);
void QScxmlError_DestroyQScxmlError(void* ptr);
struct QtScxml_PackedString QScxmlError_Description(void* ptr);
struct QtScxml_PackedString QScxmlError_FileName(void* ptr);
struct QtScxml_PackedString QScxmlError_ToString(void* ptr);
char QScxmlError_IsValid(void* ptr);
int QScxmlError_Column(void* ptr);
int QScxmlError_Line(void* ptr);
void* QScxmlEvent_NewQScxmlEvent();
void* QScxmlEvent_NewQScxmlEvent2(void* other);
void QScxmlEvent_Clear(void* ptr);
void QScxmlEvent_SetData(void* ptr, void* data);
void QScxmlEvent_SetDelay(void* ptr, int delayInMiliSecs);
void QScxmlEvent_SetErrorMessage(void* ptr, struct QtScxml_PackedString message);
void QScxmlEvent_SetEventType(void* ptr, long long ty);
void QScxmlEvent_SetInvokeId(void* ptr, struct QtScxml_PackedString invokeid);
void QScxmlEvent_SetName(void* ptr, struct QtScxml_PackedString name);
void QScxmlEvent_SetOrigin(void* ptr, struct QtScxml_PackedString origin);
void QScxmlEvent_SetOriginType(void* ptr, struct QtScxml_PackedString origintype);
void QScxmlEvent_SetSendId(void* ptr, struct QtScxml_PackedString sendid);
void QScxmlEvent_DestroyQScxmlEvent(void* ptr);
long long QScxmlEvent_EventType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_ErrorMessage(void* ptr);
struct QtScxml_PackedString QScxmlEvent_InvokeId(void* ptr);
struct QtScxml_PackedString QScxmlEvent_Name(void* ptr);
struct QtScxml_PackedString QScxmlEvent_Origin(void* ptr);
struct QtScxml_PackedString QScxmlEvent_OriginType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_ScxmlType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_SendId(void* ptr);
void* QScxmlEvent_Data(void* ptr);
char QScxmlEvent_IsErrorEvent(void* ptr);
int QScxmlEvent_Delay(void* ptr);
void* QScxmlInvokableService_NewQScxmlInvokableService(void* parentStateMachine, void* parent);
char QScxmlInvokableService_Start(void* ptr);
void QScxmlInvokableService_PostEvent(void* ptr, void* event);
void* QScxmlInvokableService_ParentStateMachine(void* ptr);
struct QtScxml_PackedString QScxmlInvokableService_Id(void* ptr);
struct QtScxml_PackedString QScxmlInvokableService_Name(void* ptr);
void* QScxmlInvokableService___dynamicPropertyNames_atList(void* ptr, int i);
void QScxmlInvokableService___dynamicPropertyNames_setList(void* ptr, void* i);
void* QScxmlInvokableService___dynamicPropertyNames_newList(void* ptr);
void* QScxmlInvokableService___findChildren_atList2(void* ptr, int i);
void QScxmlInvokableService___findChildren_setList2(void* ptr, void* i);
void* QScxmlInvokableService___findChildren_newList2(void* ptr);
void* QScxmlInvokableService___findChildren_atList3(void* ptr, int i);
void QScxmlInvokableService___findChildren_setList3(void* ptr, void* i);
void* QScxmlInvokableService___findChildren_newList3(void* ptr);
void* QScxmlInvokableService___findChildren_atList(void* ptr, int i);
void QScxmlInvokableService___findChildren_setList(void* ptr, void* i);
void* QScxmlInvokableService___findChildren_newList(void* ptr);
void* QScxmlInvokableService___children_atList(void* ptr, int i);
void QScxmlInvokableService___children_setList(void* ptr, void* i);
void* QScxmlInvokableService___children_newList(void* ptr);
char QScxmlInvokableService_EventDefault(void* ptr, void* e);
char QScxmlInvokableService_EventFilterDefault(void* ptr, void* watched, void* event);
void QScxmlInvokableService_ChildEventDefault(void* ptr, void* event);
void QScxmlInvokableService_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlInvokableService_CustomEventDefault(void* ptr, void* event);
void QScxmlInvokableService_DeleteLaterDefault(void* ptr);
void QScxmlInvokableService_DisconnectNotifyDefault(void* ptr, void* sign);
void QScxmlInvokableService_TimerEventDefault(void* ptr, void* event);
void* QScxmlInvokableService_MetaObjectDefault(void* ptr);
void* QScxmlInvokableServiceFactory_Invoke(void* ptr, void* parentStateMachine);
void* QScxmlInvokableServiceFactory___QScxmlInvokableServiceFactory_names_newList(void* ptr);
void* QScxmlInvokableServiceFactory___QScxmlInvokableServiceFactory_parameters_newList(void* ptr);
void* QScxmlInvokableServiceFactory___parameters_newList(void* ptr);
void* QScxmlInvokableServiceFactory___names_newList(void* ptr);
void* QScxmlInvokableServiceFactory___dynamicPropertyNames_atList(void* ptr, int i);
void QScxmlInvokableServiceFactory___dynamicPropertyNames_setList(void* ptr, void* i);
void* QScxmlInvokableServiceFactory___dynamicPropertyNames_newList(void* ptr);
void* QScxmlInvokableServiceFactory___findChildren_atList2(void* ptr, int i);
void QScxmlInvokableServiceFactory___findChildren_setList2(void* ptr, void* i);
void* QScxmlInvokableServiceFactory___findChildren_newList2(void* ptr);
void* QScxmlInvokableServiceFactory___findChildren_atList3(void* ptr, int i);
void QScxmlInvokableServiceFactory___findChildren_setList3(void* ptr, void* i);
void* QScxmlInvokableServiceFactory___findChildren_newList3(void* ptr);
void* QScxmlInvokableServiceFactory___findChildren_atList(void* ptr, int i);
void QScxmlInvokableServiceFactory___findChildren_setList(void* ptr, void* i);
void* QScxmlInvokableServiceFactory___findChildren_newList(void* ptr);
void* QScxmlInvokableServiceFactory___children_atList(void* ptr, int i);
void QScxmlInvokableServiceFactory___children_setList(void* ptr, void* i);
void* QScxmlInvokableServiceFactory___children_newList(void* ptr);
char QScxmlInvokableServiceFactory_EventDefault(void* ptr, void* e);
char QScxmlInvokableServiceFactory_EventFilterDefault(void* ptr, void* watched, void* event);
void QScxmlInvokableServiceFactory_ChildEventDefault(void* ptr, void* event);
void QScxmlInvokableServiceFactory_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlInvokableServiceFactory_CustomEventDefault(void* ptr, void* event);
void QScxmlInvokableServiceFactory_DeleteLaterDefault(void* ptr);
void QScxmlInvokableServiceFactory_DisconnectNotifyDefault(void* ptr, void* sign);
void QScxmlInvokableServiceFactory_TimerEventDefault(void* ptr, void* event);
void* QScxmlInvokableServiceFactory_MetaObjectDefault(void* ptr);
void* QScxmlNullDataModel_NewQScxmlNullDataModel(void* parent);
char QScxmlNullDataModel_SetScxmlProperty(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlNullDataModel_SetScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name, void* value, struct QtScxml_PackedString context);
char QScxmlNullDataModel_Setup(void* ptr, void* initialDataValues);
char QScxmlNullDataModel_SetupDefault(void* ptr, void* initialDataValues);
void QScxmlNullDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlNullDataModel_SetScxmlEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_DestroyQScxmlNullDataModel(void* ptr);
void* QScxmlNullDataModel_ScxmlProperty(void* ptr, struct QtScxml_PackedString name);
void* QScxmlNullDataModel_ScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
char QScxmlNullDataModel_HasScxmlProperty(void* ptr, struct QtScxml_PackedString name);
char QScxmlNullDataModel_HasScxmlPropertyDefault(void* ptr, struct QtScxml_PackedString name);
void* QScxmlStateMachine_QScxmlStateMachine_FromData(void* data, struct QtScxml_PackedString fileName);
void* QScxmlStateMachine_QScxmlStateMachine_FromFile(struct QtScxml_PackedString fileName);
void* QScxmlStateMachine_NewQScxmlStateMachine(void* metaObject, void* parent);
struct QtScxml_PackedList QScxmlStateMachine_InitialValues(void* ptr);
char QScxmlStateMachine_Init(void* ptr);
char QScxmlStateMachine_InitDefault(void* ptr);
void QScxmlStateMachine_CancelDelayedEvent(void* ptr, struct QtScxml_PackedString sendId);
void QScxmlStateMachine_ConnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DisconnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DataModelChanged(void* ptr, void* model);
void QScxmlStateMachine_ConnectFinished(void* ptr);
void QScxmlStateMachine_DisconnectFinished(void* ptr);
void QScxmlStateMachine_Finished(void* ptr);
void QScxmlStateMachine_ConnectInitializedChanged(void* ptr);
void QScxmlStateMachine_DisconnectInitializedChanged(void* ptr);
void QScxmlStateMachine_InitializedChanged(void* ptr, char initialized);
void QScxmlStateMachine_ConnectInvokedServicesChanged(void* ptr);
void QScxmlStateMachine_DisconnectInvokedServicesChanged(void* ptr);
void QScxmlStateMachine_InvokedServicesChanged(void* ptr, void* invokedServices);
void QScxmlStateMachine_ConnectLog(void* ptr);
void QScxmlStateMachine_DisconnectLog(void* ptr);
void QScxmlStateMachine_Log(void* ptr, struct QtScxml_PackedString label, struct QtScxml_PackedString msg);
void QScxmlStateMachine_ConnectReachedStableState(void* ptr);
void QScxmlStateMachine_DisconnectReachedStableState(void* ptr);
void QScxmlStateMachine_ReachedStableState(void* ptr);
void QScxmlStateMachine_ConnectRunningChanged(void* ptr);
void QScxmlStateMachine_DisconnectRunningChanged(void* ptr);
void QScxmlStateMachine_RunningChanged(void* ptr, char running);
void QScxmlStateMachine_SetDataModel(void* ptr, void* model);
void QScxmlStateMachine_SetInitialValues(void* ptr, void* initialValues);
void QScxmlStateMachine_SetRunning(void* ptr, char running);
void QScxmlStateMachine_SetTableData(void* ptr, void* tableData);
void QScxmlStateMachine_Start(void* ptr);
void QScxmlStateMachine_StartDefault(void* ptr);
void QScxmlStateMachine_Stop(void* ptr);
void QScxmlStateMachine_StopDefault(void* ptr);
void QScxmlStateMachine_SubmitEvent(void* ptr, void* event);
void QScxmlStateMachine_SubmitEvent2(void* ptr, struct QtScxml_PackedString eventName);
void QScxmlStateMachine_SubmitEvent3(void* ptr, struct QtScxml_PackedString eventName, void* data);
void QScxmlStateMachine_ConnectTableDataChanged(void* ptr);
void QScxmlStateMachine_DisconnectTableDataChanged(void* ptr);
void QScxmlStateMachine_TableDataChanged(void* ptr, void* tableData);
void* QScxmlStateMachine_DataModel(void* ptr);
void* QScxmlStateMachine_TableData(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_Name(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_SessionId(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_ActiveStateNames(void* ptr, char compress);
struct QtScxml_PackedString QScxmlStateMachine_StateNames(void* ptr, char compress);
struct QtScxml_PackedList QScxmlStateMachine_ParseErrors(void* ptr);
struct QtScxml_PackedList QScxmlStateMachine_InvokedServices(void* ptr);
char QScxmlStateMachine_IsActive(void* ptr, struct QtScxml_PackedString scxmlStateName);
char QScxmlStateMachine_IsActive2(void* ptr, int stateIndex);
char QScxmlStateMachine_IsDispatchableTarget(void* ptr, struct QtScxml_PackedString target);
char QScxmlStateMachine_IsInitialized(void* ptr);
char QScxmlStateMachine_IsInvoked(void* ptr);
char QScxmlStateMachine_IsRunning(void* ptr);
void* QScxmlStateMachine___initialValues_atList(void* ptr, struct QtScxml_PackedString i);
void QScxmlStateMachine___initialValues_setList(void* ptr, struct QtScxml_PackedString key, void* i);
void* QScxmlStateMachine___initialValues_newList(void* ptr);
struct QtScxml_PackedList QScxmlStateMachine___initialValues_keyList(void* ptr);
void* QScxmlStateMachine___initialValuesChanged_initialValues_atList(void* ptr, struct QtScxml_PackedString i);
void QScxmlStateMachine___initialValuesChanged_initialValues_setList(void* ptr, struct QtScxml_PackedString key, void* i);
void* QScxmlStateMachine___initialValuesChanged_initialValues_newList(void* ptr);
struct QtScxml_PackedList QScxmlStateMachine___initialValuesChanged_keyList(void* ptr);
void* QScxmlStateMachine___invokedServicesChanged_invokedServices_atList(void* ptr, int i);
void QScxmlStateMachine___invokedServicesChanged_invokedServices_setList(void* ptr, void* i);
void* QScxmlStateMachine___invokedServicesChanged_invokedServices_newList(void* ptr);
void* QScxmlStateMachine___setInitialValues_initialValues_atList(void* ptr, struct QtScxml_PackedString i);
void QScxmlStateMachine___setInitialValues_initialValues_setList(void* ptr, struct QtScxml_PackedString key, void* i);
void* QScxmlStateMachine___setInitialValues_initialValues_newList(void* ptr);
struct QtScxml_PackedList QScxmlStateMachine___setInitialValues_keyList(void* ptr);
void* QScxmlStateMachine___parseErrors_atList(void* ptr, int i);
void QScxmlStateMachine___parseErrors_setList(void* ptr, void* i);
void* QScxmlStateMachine___parseErrors_newList(void* ptr);
void* QScxmlStateMachine___invokedServices_atList(void* ptr, int i);
void QScxmlStateMachine___invokedServices_setList(void* ptr, void* i);
void* QScxmlStateMachine___invokedServices_newList(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_____initialValues_keyList_atList(void* ptr, int i);
void QScxmlStateMachine_____initialValues_keyList_setList(void* ptr, struct QtScxml_PackedString i);
void* QScxmlStateMachine_____initialValues_keyList_newList(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_____initialValuesChanged_keyList_atList(void* ptr, int i);
void QScxmlStateMachine_____initialValuesChanged_keyList_setList(void* ptr, struct QtScxml_PackedString i);
void* QScxmlStateMachine_____initialValuesChanged_keyList_newList(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_____setInitialValues_keyList_atList(void* ptr, int i);
void QScxmlStateMachine_____setInitialValues_keyList_setList(void* ptr, struct QtScxml_PackedString i);
void* QScxmlStateMachine_____setInitialValues_keyList_newList(void* ptr);
void* QScxmlStateMachine___dynamicPropertyNames_atList(void* ptr, int i);
void QScxmlStateMachine___dynamicPropertyNames_setList(void* ptr, void* i);
void* QScxmlStateMachine___dynamicPropertyNames_newList(void* ptr);
void* QScxmlStateMachine___findChildren_atList2(void* ptr, int i);
void QScxmlStateMachine___findChildren_setList2(void* ptr, void* i);
void* QScxmlStateMachine___findChildren_newList2(void* ptr);
void* QScxmlStateMachine___findChildren_atList3(void* ptr, int i);
void QScxmlStateMachine___findChildren_setList3(void* ptr, void* i);
void* QScxmlStateMachine___findChildren_newList3(void* ptr);
void* QScxmlStateMachine___findChildren_atList(void* ptr, int i);
void QScxmlStateMachine___findChildren_setList(void* ptr, void* i);
void* QScxmlStateMachine___findChildren_newList(void* ptr);
void* QScxmlStateMachine___children_atList(void* ptr, int i);
void QScxmlStateMachine___children_setList(void* ptr, void* i);
void* QScxmlStateMachine___children_newList(void* ptr);
char QScxmlStateMachine_EventDefault(void* ptr, void* e);
char QScxmlStateMachine_EventFilterDefault(void* ptr, void* watched, void* event);
void QScxmlStateMachine_ChildEventDefault(void* ptr, void* event);
void QScxmlStateMachine_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlStateMachine_CustomEventDefault(void* ptr, void* event);
void QScxmlStateMachine_DeleteLaterDefault(void* ptr);
void QScxmlStateMachine_DisconnectNotifyDefault(void* ptr, void* sign);
void QScxmlStateMachine_TimerEventDefault(void* ptr, void* event);
void* QScxmlStateMachine_MetaObjectDefault(void* ptr);
void* QScxmlStaticScxmlServiceFactory_Invoke(void* ptr, void* parentStateMachine);
void* QScxmlStaticScxmlServiceFactory_InvokeDefault(void* ptr, void* parentStateMachine);
void* QScxmlStaticScxmlServiceFactory___QScxmlStaticScxmlServiceFactory_nameList_newList(void* ptr);
void* QScxmlStaticScxmlServiceFactory___QScxmlStaticScxmlServiceFactory_parameters_newList(void* ptr);
void QScxmlTableData_DestroyQScxmlTableData(void* ptr);
void QScxmlTableData_DestroyQScxmlTableDataDefault(void* ptr);
void* QScxmlTableData_ServiceFactory(void* ptr, int id);
struct QtScxml_PackedString QScxmlTableData_Name(void* ptr);

#ifdef __cplusplus
}
#endif

#endif