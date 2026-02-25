#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/VisualTree.h"
#include "mc/client/gui/controls/renderers/IOffscreenPaperDollRenderer.h"
#include "mc/client/gui/controls/renderers/PaperDollRenderer.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class SerializedSkinRef;
class UIControl;
class UIScene;
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedImageResource; }
namespace mce::PaperDollOffscreenUtils { struct PaperdollCaptureFrame; }
// clang-format on

class RenderDragonOffscreenPaperDollRenderer : public ::IOffscreenPaperDollRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 280, ::PaperDollRenderer>                                          mPaperDollRenderer;
    ::ll::TypedStorage<8, 240, ::VisualTree>                                                 mVisualTree;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIControl>>                                 mUIControl;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftUIRenderContext>>                  mRenderContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIScene>>                                  mUIScene;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenContext>>                             mScreenContext;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::dragon::ResolvedImageResource>> mTargetImage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void cleanup() /*override*/;

    virtual void initialize(::IClientInstance& clientInstance) /*override*/;

    virtual void setScreenshotScale(::glm::vec2 const& screenshotCameraScale) /*override*/;

    virtual void beginCapturePaperDollImage(
        uint                                                                        screenshotWidth,
        uint                                                                        screenshotHeight,
        ::IClientInstance&                                                          clientInstance,
        ::SerializedSkinRef const&                                                  serializedSkin,
        ::std::vector<::mce::PaperDollOffscreenUtils::PaperdollCaptureFrame> const& frames
    ) /*override*/;

    virtual bool isCaptureReady() const /*override*/;

    virtual ::cg::ImageBuffer retrieveCaptureAsImageBuffer() const /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual void setGuiScale(float scale) /*override*/;

    virtual ~RenderDragonOffscreenPaperDollRenderer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $cleanup();

    MCAPI void $initialize(::IClientInstance& clientInstance);

    MCAPI void $setScreenshotScale(::glm::vec2 const& screenshotCameraScale);

    MCAPI void $beginCapturePaperDollImage(
        uint                                                                        screenshotWidth,
        uint                                                                        screenshotHeight,
        ::IClientInstance&                                                          clientInstance,
        ::SerializedSkinRef const&                                                  serializedSkin,
        ::std::vector<::mce::PaperDollOffscreenUtils::PaperdollCaptureFrame> const& frames
    );

    MCAPI bool $isCaptureReady() const;

    MCAPI ::cg::ImageBuffer $retrieveCaptureAsImageBuffer() const;

    MCAPI float $getGuiScale() const;

    MCAPI void $setGuiScale(float scale);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
