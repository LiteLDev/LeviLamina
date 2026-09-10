#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IOffscreenPaperDollRenderer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IGeometryAtlasCaptureService; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
namespace GeometryAtlas { struct PaperdollCaptureFrame; }
namespace cg { class ImageBuffer; }
// clang-format on

namespace GeometryAtlas {

class GeometryAtlasOffscreenPaperDollRenderer : public ::GeometryAtlas::IOffscreenPaperDollRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::IGeometryAtlas>>               mAtlas;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::IGeometryAtlasCaptureService>> mCaptureService;
    ::ll::TypedStorage<8, 24, ::std::optional<::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>>>
                                                                                          mCapture;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GeometryAtlas::IPaperDollHandleFactory>> mFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void beginCapturePaperDollImage(
        uint                                                         screenshotWidth,
        uint                                                         screenshotHeight,
        ::std::string const&                                         skinName,
        ::std::vector<::GeometryAtlas::PaperdollCaptureFrame> const& frames
    ) /*override*/;

    virtual bool isCaptureReady() const /*override*/;

    virtual ::cg::ImageBuffer retrieveCaptureAsImageBuffer() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $beginCapturePaperDollImage(
        uint                                                         screenshotWidth,
        uint                                                         screenshotHeight,
        ::std::string const&                                         skinName,
        ::std::vector<::GeometryAtlas::PaperdollCaptureFrame> const& frames
    );

    MCAPI bool $isCaptureReady() const;

    MCAPI ::cg::ImageBuffer $retrieveCaptureAsImageBuffer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
