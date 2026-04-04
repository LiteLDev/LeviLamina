#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class SerializedSkinRef;
namespace cg { class ImageBuffer; }
namespace mce::PaperDollOffscreenUtils { struct PaperdollCaptureFrame; }
// clang-format on

class IOffscreenPaperDollRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOffscreenPaperDollRenderer() = default;

    virtual void cleanup() = 0;

    virtual void initialize(::IClientInstance& clientInstance) = 0;

    virtual void setScreenshotScale(::glm::vec2 const& screenshotCameraScale) = 0;

    virtual void beginCapturePaperDollImage(
        uint                                                                        screenshotWidth,
        uint                                                                        screenshotHeight,
        ::IClientInstance&                                                          clientInstance,
        ::SerializedSkinRef const&                                                  serializedSkin,
        ::std::vector<::mce::PaperDollOffscreenUtils::PaperdollCaptureFrame> const& frames
    ) = 0;

    virtual bool isCaptureReady() const = 0;

    virtual ::cg::ImageBuffer retrieveCaptureAsImageBuffer() const = 0;

    virtual float getGuiScale() const = 0;

    virtual void setGuiScale(float scale) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
