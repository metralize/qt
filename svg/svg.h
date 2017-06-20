// +build !minimal

#pragma once

#ifndef GO_QTSVG_H
#define GO_QTSVG_H

#include <stdint.h>

#ifdef __cplusplus
int QGraphicsSvgItem_QGraphicsSvgItem_QRegisterMetaType();
int QSvgRenderer_QSvgRenderer_QRegisterMetaType();
int QSvgWidget_QSvgWidget_QRegisterMetaType();
extern "C" {
#endif

struct QtSvg_PackedString { char* data; long long len; };
struct QtSvg_PackedList { void* data; long long len; };
void* QGraphicsSvgItem_NewQGraphicsSvgItem(void* parent);
void* QGraphicsSvgItem_NewQGraphicsSvgItem2(struct QtSvg_PackedString fileName, void* parent);
void QGraphicsSvgItem_Paint(void* ptr, void* painter, void* option, void* widget);
void QGraphicsSvgItem_PaintDefault(void* ptr, void* painter, void* option, void* widget);
void QGraphicsSvgItem_SetElementId(void* ptr, struct QtSvg_PackedString id);
void QGraphicsSvgItem_SetMaximumCacheSize(void* ptr, void* size);
void QGraphicsSvgItem_SetSharedRenderer(void* ptr, void* renderer);
void* QGraphicsSvgItem_BoundingRect(void* ptr);
void* QGraphicsSvgItem_BoundingRectDefault(void* ptr);
void* QGraphicsSvgItem_MaximumCacheSize(void* ptr);
struct QtSvg_PackedString QGraphicsSvgItem_ElementId(void* ptr);
void* QGraphicsSvgItem_Renderer(void* ptr);
int QGraphicsSvgItem_TypeDefault(void* ptr);
void* QGraphicsSvgItem___dynamicPropertyNames_atList(void* ptr, int i);
void QGraphicsSvgItem___dynamicPropertyNames_setList(void* ptr, void* i);
void* QGraphicsSvgItem___dynamicPropertyNames_newList(void* ptr);
void* QGraphicsSvgItem___findChildren_atList2(void* ptr, int i);
void QGraphicsSvgItem___findChildren_setList2(void* ptr, void* i);
void* QGraphicsSvgItem___findChildren_newList2(void* ptr);
void* QGraphicsSvgItem___findChildren_atList3(void* ptr, int i);
void QGraphicsSvgItem___findChildren_setList3(void* ptr, void* i);
void* QGraphicsSvgItem___findChildren_newList3(void* ptr);
void* QGraphicsSvgItem___findChildren_atList(void* ptr, int i);
void QGraphicsSvgItem___findChildren_setList(void* ptr, void* i);
void* QGraphicsSvgItem___findChildren_newList(void* ptr);
void* QGraphicsSvgItem___children_atList(void* ptr, int i);
void QGraphicsSvgItem___children_setList(void* ptr, void* i);
void* QGraphicsSvgItem___children_newList(void* ptr);
void* QGraphicsSvgItem___setTransformations_transformations_atList(void* ptr, int i);
void QGraphicsSvgItem___setTransformations_transformations_setList(void* ptr, void* i);
void* QGraphicsSvgItem___setTransformations_transformations_newList(void* ptr);
void* QGraphicsSvgItem___childItems_atList(void* ptr, int i);
void QGraphicsSvgItem___childItems_setList(void* ptr, void* i);
void* QGraphicsSvgItem___childItems_newList(void* ptr);
void* QGraphicsSvgItem___collidingItems_atList(void* ptr, int i);
void QGraphicsSvgItem___collidingItems_setList(void* ptr, void* i);
void* QGraphicsSvgItem___collidingItems_newList(void* ptr);
void* QGraphicsSvgItem___transformations_atList(void* ptr, int i);
void QGraphicsSvgItem___transformations_setList(void* ptr, void* i);
void* QGraphicsSvgItem___transformations_newList(void* ptr);
char QGraphicsSvgItem_EventDefault(void* ptr, void* ev);
void QGraphicsSvgItem_UpdateMicroFocusDefault(void* ptr);
char QGraphicsSvgItem_EventFilterDefault(void* ptr, void* watched, void* event);
void QGraphicsSvgItem_ChildEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_ConnectNotifyDefault(void* ptr, void* sign);
void QGraphicsSvgItem_CustomEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_DeleteLaterDefault(void* ptr);
void QGraphicsSvgItem_DisconnectNotifyDefault(void* ptr, void* sign);
void QGraphicsSvgItem_TimerEventDefault(void* ptr, void* event);
void* QGraphicsSvgItem_MetaObjectDefault(void* ptr);
void* QGraphicsSvgItem_ItemChangeDefault(void* ptr, long long change, void* value);
char QGraphicsSvgItem_SceneEventDefault(void* ptr, void* event);
char QGraphicsSvgItem_SceneEventFilterDefault(void* ptr, void* watched, void* event);
void QGraphicsSvgItem_AdvanceDefault(void* ptr, int phase);
void QGraphicsSvgItem_ContextMenuEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_DragEnterEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_DragLeaveEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_DragMoveEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_DropEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_FocusInEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_FocusOutEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_HoverEnterEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_HoverLeaveEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_HoverMoveEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_InputMethodEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_KeyPressEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_KeyReleaseEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_MouseDoubleClickEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_MouseMoveEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_MousePressEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_MouseReleaseEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_WheelEventDefault(void* ptr, void* event);
void* QGraphicsSvgItem_OpaqueAreaDefault(void* ptr);
void* QGraphicsSvgItem_ShapeDefault(void* ptr);
void* QGraphicsSvgItem_InputMethodQueryDefault(void* ptr, long long query);
char QGraphicsSvgItem_CollidesWithItemDefault(void* ptr, void* other, long long mode);
char QGraphicsSvgItem_CollidesWithPathDefault(void* ptr, void* path, long long mode);
char QGraphicsSvgItem_ContainsDefault(void* ptr, void* point);
char QGraphicsSvgItem_IsObscuredByDefault(void* ptr, void* item);
void* QSvgGenerator_NewQSvgGenerator();
void QSvgGenerator_SetDescription(void* ptr, struct QtSvg_PackedString description);
void QSvgGenerator_SetFileName(void* ptr, struct QtSvg_PackedString fileName);
void QSvgGenerator_SetOutputDevice(void* ptr, void* outputDevice);
void QSvgGenerator_SetResolution(void* ptr, int dpi);
void QSvgGenerator_SetSize(void* ptr, void* size);
void QSvgGenerator_SetTitle(void* ptr, struct QtSvg_PackedString title);
void QSvgGenerator_SetViewBox(void* ptr, void* viewBox);
void QSvgGenerator_SetViewBox2(void* ptr, void* viewBox);
void QSvgGenerator_DestroyQSvgGenerator(void* ptr);
void* QSvgGenerator_OutputDevice(void* ptr);
void* QSvgGenerator_PaintEngine(void* ptr);
void* QSvgGenerator_PaintEngineDefault(void* ptr);
void* QSvgGenerator_ViewBox(void* ptr);
void* QSvgGenerator_ViewBoxF(void* ptr);
void* QSvgGenerator_Size(void* ptr);
struct QtSvg_PackedString QSvgGenerator_Description(void* ptr);
struct QtSvg_PackedString QSvgGenerator_FileName(void* ptr);
struct QtSvg_PackedString QSvgGenerator_Title(void* ptr);
int QSvgGenerator_Resolution(void* ptr);
;
void* QSvgRenderer_NewQSvgRenderer(void* parent);
void* QSvgRenderer_NewQSvgRenderer4(void* contents, void* parent);
void* QSvgRenderer_NewQSvgRenderer3(void* contents, void* parent);
void* QSvgRenderer_NewQSvgRenderer2(struct QtSvg_PackedString filename, void* parent);
char QSvgRenderer_Load3(void* ptr, void* contents);
char QSvgRenderer_Load3Default(void* ptr, void* contents);
char QSvgRenderer_Load2(void* ptr, void* contents);
char QSvgRenderer_Load2Default(void* ptr, void* contents);
char QSvgRenderer_Load(void* ptr, struct QtSvg_PackedString filename);
char QSvgRenderer_LoadDefault(void* ptr, struct QtSvg_PackedString filename);
void QSvgRenderer_Render(void* ptr, void* painter);
void QSvgRenderer_RenderDefault(void* ptr, void* painter);
void QSvgRenderer_Render2(void* ptr, void* painter, void* bounds);
void QSvgRenderer_Render2Default(void* ptr, void* painter, void* bounds);
void QSvgRenderer_Render3(void* ptr, void* painter, struct QtSvg_PackedString elementId, void* bounds);
void QSvgRenderer_Render3Default(void* ptr, void* painter, struct QtSvg_PackedString elementId, void* bounds);
void QSvgRenderer_ConnectRepaintNeeded(void* ptr);
void QSvgRenderer_DisconnectRepaintNeeded(void* ptr);
void QSvgRenderer_RepaintNeeded(void* ptr);
void QSvgRenderer_SetFramesPerSecond(void* ptr, int num);
void QSvgRenderer_SetViewBox(void* ptr, void* viewbox);
void QSvgRenderer_SetViewBox2(void* ptr, void* viewbox);
void QSvgRenderer_DestroyQSvgRenderer(void* ptr);
void* QSvgRenderer_ViewBox(void* ptr);
void* QSvgRenderer_BoundsOnElement(void* ptr, struct QtSvg_PackedString id);
void* QSvgRenderer_ViewBoxF(void* ptr);
void* QSvgRenderer_DefaultSize(void* ptr);
char QSvgRenderer_Animated(void* ptr);
char QSvgRenderer_ElementExists(void* ptr, struct QtSvg_PackedString id);
char QSvgRenderer_IsValid(void* ptr);
int QSvgRenderer_FramesPerSecond(void* ptr);
void* QSvgRenderer___dynamicPropertyNames_atList(void* ptr, int i);
void QSvgRenderer___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSvgRenderer___dynamicPropertyNames_newList(void* ptr);
void* QSvgRenderer___findChildren_atList2(void* ptr, int i);
void QSvgRenderer___findChildren_setList2(void* ptr, void* i);
void* QSvgRenderer___findChildren_newList2(void* ptr);
void* QSvgRenderer___findChildren_atList3(void* ptr, int i);
void QSvgRenderer___findChildren_setList3(void* ptr, void* i);
void* QSvgRenderer___findChildren_newList3(void* ptr);
void* QSvgRenderer___findChildren_atList(void* ptr, int i);
void QSvgRenderer___findChildren_setList(void* ptr, void* i);
void* QSvgRenderer___findChildren_newList(void* ptr);
void* QSvgRenderer___children_atList(void* ptr, int i);
void QSvgRenderer___children_setList(void* ptr, void* i);
void* QSvgRenderer___children_newList(void* ptr);
char QSvgRenderer_EventDefault(void* ptr, void* e);
char QSvgRenderer_EventFilterDefault(void* ptr, void* watched, void* event);
void QSvgRenderer_ChildEventDefault(void* ptr, void* event);
void QSvgRenderer_ConnectNotifyDefault(void* ptr, void* sign);
void QSvgRenderer_CustomEventDefault(void* ptr, void* event);
void QSvgRenderer_DeleteLaterDefault(void* ptr);
void QSvgRenderer_DisconnectNotifyDefault(void* ptr, void* sign);
void QSvgRenderer_TimerEventDefault(void* ptr, void* event);
void* QSvgRenderer_MetaObjectDefault(void* ptr);
void* QSvgWidget_NewQSvgWidget(void* parent);
void* QSvgWidget_NewQSvgWidget2(struct QtSvg_PackedString file, void* parent);
void QSvgWidget_Load2(void* ptr, void* contents);
void QSvgWidget_Load2Default(void* ptr, void* contents);
void QSvgWidget_Load(void* ptr, struct QtSvg_PackedString file);
void QSvgWidget_LoadDefault(void* ptr, struct QtSvg_PackedString file);
void QSvgWidget_PaintEventDefault(void* ptr, void* event);
void QSvgWidget_DestroyQSvgWidget(void* ptr);
void* QSvgWidget_SizeHintDefault(void* ptr);
void* QSvgWidget_Renderer(void* ptr);
void* QSvgWidget___addActions_actions_atList(void* ptr, int i);
void QSvgWidget___addActions_actions_setList(void* ptr, void* i);
void* QSvgWidget___addActions_actions_newList(void* ptr);
void* QSvgWidget___insertActions_actions_atList(void* ptr, int i);
void QSvgWidget___insertActions_actions_setList(void* ptr, void* i);
void* QSvgWidget___insertActions_actions_newList(void* ptr);
void* QSvgWidget___actions_atList(void* ptr, int i);
void QSvgWidget___actions_setList(void* ptr, void* i);
void* QSvgWidget___actions_newList(void* ptr);
void* QSvgWidget___dynamicPropertyNames_atList(void* ptr, int i);
void QSvgWidget___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSvgWidget___dynamicPropertyNames_newList(void* ptr);
void* QSvgWidget___findChildren_atList2(void* ptr, int i);
void QSvgWidget___findChildren_setList2(void* ptr, void* i);
void* QSvgWidget___findChildren_newList2(void* ptr);
void* QSvgWidget___findChildren_atList3(void* ptr, int i);
void QSvgWidget___findChildren_setList3(void* ptr, void* i);
void* QSvgWidget___findChildren_newList3(void* ptr);
void* QSvgWidget___findChildren_atList(void* ptr, int i);
void QSvgWidget___findChildren_setList(void* ptr, void* i);
void* QSvgWidget___findChildren_newList(void* ptr);
void* QSvgWidget___children_atList(void* ptr, int i);
void QSvgWidget___children_setList(void* ptr, void* i);
void* QSvgWidget___children_newList(void* ptr);
char QSvgWidget_CloseDefault(void* ptr);
char QSvgWidget_EventDefault(void* ptr, void* event);
char QSvgWidget_FocusNextPrevChildDefault(void* ptr, char next);
char QSvgWidget_NativeEventDefault(void* ptr, void* eventType, void* message, long result);
void QSvgWidget_ActionEventDefault(void* ptr, void* event);
void QSvgWidget_ChangeEventDefault(void* ptr, void* event);
void QSvgWidget_CloseEventDefault(void* ptr, void* event);
void QSvgWidget_ContextMenuEventDefault(void* ptr, void* event);
void QSvgWidget_DragEnterEventDefault(void* ptr, void* event);
void QSvgWidget_DragLeaveEventDefault(void* ptr, void* event);
void QSvgWidget_DragMoveEventDefault(void* ptr, void* event);
void QSvgWidget_DropEventDefault(void* ptr, void* event);
void QSvgWidget_EnterEventDefault(void* ptr, void* event);
void QSvgWidget_FocusInEventDefault(void* ptr, void* event);
void QSvgWidget_FocusOutEventDefault(void* ptr, void* event);
void QSvgWidget_HideDefault(void* ptr);
void QSvgWidget_HideEventDefault(void* ptr, void* event);
void QSvgWidget_InputMethodEventDefault(void* ptr, void* event);
void QSvgWidget_KeyPressEventDefault(void* ptr, void* event);
void QSvgWidget_KeyReleaseEventDefault(void* ptr, void* event);
void QSvgWidget_LeaveEventDefault(void* ptr, void* event);
void QSvgWidget_LowerDefault(void* ptr);
void QSvgWidget_MouseDoubleClickEventDefault(void* ptr, void* event);
void QSvgWidget_MouseMoveEventDefault(void* ptr, void* event);
void QSvgWidget_MousePressEventDefault(void* ptr, void* event);
void QSvgWidget_MouseReleaseEventDefault(void* ptr, void* event);
void QSvgWidget_MoveEventDefault(void* ptr, void* event);
void QSvgWidget_RaiseDefault(void* ptr);
void QSvgWidget_RepaintDefault(void* ptr);
void QSvgWidget_ResizeEventDefault(void* ptr, void* event);
void QSvgWidget_SetDisabledDefault(void* ptr, char disable);
void QSvgWidget_SetEnabledDefault(void* ptr, char vbo);
void QSvgWidget_SetFocus2Default(void* ptr);
void QSvgWidget_SetHiddenDefault(void* ptr, char hidden);
void QSvgWidget_SetStyleSheetDefault(void* ptr, struct QtSvg_PackedString styleSheet);
void QSvgWidget_SetVisibleDefault(void* ptr, char visible);
void QSvgWidget_SetWindowModifiedDefault(void* ptr, char vbo);
void QSvgWidget_SetWindowTitleDefault(void* ptr, struct QtSvg_PackedString vqs);
void QSvgWidget_ShowDefault(void* ptr);
void QSvgWidget_ShowEventDefault(void* ptr, void* event);
void QSvgWidget_ShowFullScreenDefault(void* ptr);
void QSvgWidget_ShowMaximizedDefault(void* ptr);
void QSvgWidget_ShowMinimizedDefault(void* ptr);
void QSvgWidget_ShowNormalDefault(void* ptr);
void QSvgWidget_TabletEventDefault(void* ptr, void* event);
void QSvgWidget_UpdateDefault(void* ptr);
void QSvgWidget_UpdateMicroFocusDefault(void* ptr);
void QSvgWidget_WheelEventDefault(void* ptr, void* event);
void* QSvgWidget_PaintEngineDefault(void* ptr);
void* QSvgWidget_MinimumSizeHintDefault(void* ptr);
void* QSvgWidget_InputMethodQueryDefault(void* ptr, long long query);
char QSvgWidget_HasHeightForWidthDefault(void* ptr);
int QSvgWidget_HeightForWidthDefault(void* ptr, int w);
int QSvgWidget_MetricDefault(void* ptr, long long m);
char QSvgWidget_EventFilterDefault(void* ptr, void* watched, void* event);
void QSvgWidget_ChildEventDefault(void* ptr, void* event);
void QSvgWidget_ConnectNotifyDefault(void* ptr, void* sign);
void QSvgWidget_CustomEventDefault(void* ptr, void* event);
void QSvgWidget_DeleteLaterDefault(void* ptr);
void QSvgWidget_DisconnectNotifyDefault(void* ptr, void* sign);
void QSvgWidget_TimerEventDefault(void* ptr, void* event);
void* QSvgWidget_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif