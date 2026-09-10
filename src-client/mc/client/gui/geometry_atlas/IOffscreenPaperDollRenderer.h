#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct PaperdollCaptureFrame; }
namespace cg { class ImageBuffer; }
// clang-format on

namespace GeometryAtlas {

class IOffscreenPaperDollRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOffscreenPaperDollRenderer() = default;

    virtual void beginCapturePaperDollImage(
        uint                                                         screenshotWidth,
        uint                                                         screenshotHeight,
        ::std::string const&                                         skinName,
        ::std::vector<::GeometryAtlas::PaperdollCaptureFrame> const& frames
    ) = 0;

    virtual bool isCaptureReady() const = 0;

    virtual ::cg::ImageBuffer retrieveCaptureAsImageBuffer() const = 0;
    // NOLINTEND
};

} // namespace GeometryAtlas
