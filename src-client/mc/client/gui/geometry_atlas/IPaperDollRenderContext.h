#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
struct PaperDollRenderOwnerData;
struct PaperDollUpdateOwnerData;
// clang-format on

namespace GeometryAtlas::details {

class IPaperDollRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollRenderContext() = default;

    virtual void update(::PaperDollUpdateOwnerData const& data) = 0;

    virtual void render(
        ::PaperDollRenderOwnerData const&    data,
        ::OffscreenCaptureDescription const* capture,
        bool                                 isRenderingUI
    ) = 0;
    // NOLINTEND
};

} // namespace GeometryAtlas::details
