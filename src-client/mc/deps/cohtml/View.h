#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/CaptureMode.h"
#include "mc/deps/cohtml/InternalCaches.h"
#include "mc/deps/cohtml/Options.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
namespace cohtml { class IEventHandler; }
namespace cohtml { class TypeInfo; }
namespace cohtml { struct DebugDump; }
namespace cohtml { struct FrameCapture; }
namespace cohtml { struct GestureEventData; }
namespace cohtml { struct ImagesList; }
namespace cohtml { struct KeyEventData; }
namespace cohtml { struct MouseEventData; }
namespace cohtml { struct PageCapture; }
namespace cohtml { struct TouchEventData; }
namespace renoir { class ICustomEffectRenderer; }
namespace renoir { class ISubLayerCompositor; }
namespace renoir { struct GPUMemoryInfo; }
namespace renoir { struct Texture2D; }
// clang-format on

namespace cohtml {

class View {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~View() = default;

    virtual void Destroy() = 0;

    virtual void LoadURL(char const*) = 0;

    virtual void Reload() = 0;

    virtual void UnloadDocument() = 0;

    virtual void ClearNavigationHistory() = 0;

    virtual uint Advance(double) = 0;

    virtual uint GetId() const = 0;

    virtual int GetTaskFamilyId() const = 0;

    virtual void Resize(uint, uint) = 0;

    virtual void SetUserBackground(void*, ::renoir::Texture2D const&) = 0;

    virtual void SetUserBackgroundOffset(float, float) = 0;

    virtual void SetResolutionForRendering(uint, uint) = 0;

    virtual uint GetWidth() const = 0;

    virtual uint GetHeight() const = 0;

    virtual void OnListenerLost() = 0;

    virtual void EnableRendering(bool) = 0;

    virtual void EnableImmediateLayout(bool) = 0;

    virtual bool IsImmediateLayoutEnabled() const = 0;

    virtual void ContinuousRepaint(bool) = 0;

    virtual void EnableUISurfacePartitioning(bool) = 0;

    virtual void ShowPaintRectangles(bool) = 0;

    virtual void ShowElementAABBs(bool) = 0;

    virtual void EmitRenderingMetadata(bool) = 0;

    virtual bool SetAdditionalFontFallbacks(char const*) = 0;

    virtual ::cohtml::DebugDump* DebugDumpDOMTree(uint) = 0;

    virtual ::cohtml::DebugDump* DebugDumpStackingContextTree() = 0;

    virtual void TouchEvent(::cohtml::TouchEventData const*, uint, bool*, void*) = 0;

    virtual void GestureEvent(::cohtml::GestureEventData const&, bool*, void*) = 0;

    virtual void MouseEvent(::cohtml::MouseEventData const&, bool*, void*) = 0;

    virtual void KeyEvent(::cohtml::KeyEventData const&, bool*, void*) = 0;

    virtual bool IMESetComposition(char const*, uint, uint) = 0;

    virtual bool IMEConfirmComposition(char const*) = 0;

    virtual bool IMECancelComposition() = 0;

    virtual float GetStartPanThreshold() const = 0;

    virtual void SetStartPanThreshold(float) = 0;

    virtual void SetUserAgent(char const*) = 0;

    virtual ::cohtml::ImagesList* GetUsedImagesList(::cohtml::ImagesListExtract::Options) const = 0;

    virtual ::renoir::GPUMemoryInfo* GetGPUMemoryStats() const = 0;

    virtual void ResetGPUMemoryTrackerPeaks() = 0;

    virtual void BeginCaptureDebugFrame(void*, void (*)(void*, ::cohtml::FrameCapture*), ::cohtml::CaptureMode) = 0;

    virtual void EndCaptureDebugFrame() = 0;

    virtual void CaptureSingleDebugFrame(void*, void (*)(void*, ::cohtml::FrameCapture*), ::cohtml::CaptureMode) = 0;

    virtual void BeginCaptureBackendDebugFrame(void*, void (*)(void*, ::cohtml::FrameCapture*)) = 0;

    virtual void EndCaptureBackendDebugFrame() = 0;

    virtual void SetupPageCapture() = 0;

    virtual ::cohtml::PageCapture* DoPageCapture() = 0;

    virtual void LoadPageCapture(char const*, uint64, bool) = 0;

    virtual void CaptureSingleBackendDebugFrame(void*, void (*)(void*, ::cohtml::FrameCapture*)) = 0;

    virtual void GetCacheCountStats(::cohtml::InternalCaches, uint&, uint&) = 0;

    virtual void GetCacheBytesStats(::cohtml::InternalCaches, uint&, uint&) = 0;

    virtual void QueueSetCacheCountSize(::cohtml::InternalCaches, uint) = 0;

    virtual void QueueSetCacheBytesSize(::cohtml::InternalCaches, uint) = 0;

    virtual void QueueClearCaches(uint) = 0;

    virtual void* RegisterForEvent(char const*, ::cohtml::IEventHandler*) = 0;

    virtual void UnregisterFromEvent(void*) = 0;

    virtual void* BindCall(char const*, ::cohtml::IEventHandler*) = 0;

    virtual void UnbindCall(void*) = 0;

    virtual void UnbindObject(void const*) = 0;

    virtual void DestroyExposedArray(void*) = 0;

    virtual bool IsReadyForBindings() const = 0;

    virtual void ExecuteScript(char const*) = 0;

    virtual void AddInitialScript(char const*) = 0;

    virtual void ResetInitialScripts() = 0;

    virtual void TerminateScriptExecution() = 0;

    virtual void SetCustomSceneCompositor(::renoir::ISubLayerCompositor*, void*) = 0;

    virtual void SetSceneCustomEffectRenderer(::renoir::ICustomEffectRenderer*, void*) = 0;

    virtual ::cohtml::Binder* GetBinder() = 0;

    virtual void SynchronizeModels() = 0;

    virtual void DestroyExposedInstanceOfType(void*, ::cohtml::TypeInfo*) = 0;

    virtual void UpdateWholeModelOfType(void*, ::cohtml::TypeInfo*) = 0;

    virtual void UnregisterModelOfType(void*, ::cohtml::TypeInfo*) = 0;

    virtual void RegisterModelOfType(char const*, void*, ::cohtml::TypeInfo*, void (*)(::cohtml::Binder*, void*)) = 0;

    virtual void* ReservedMethod(void*, void*) = 0;

    virtual void TriggerEvent(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
