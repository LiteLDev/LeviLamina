#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/PaperDollBaseActorRenderContext.h"
#include "mc/client/gui/geometry_atlas/IPaperDollRenderContext.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class PaperDollRenderer;
struct OffscreenCaptureDescription;
struct PaperDollRenderOwnerData;
struct PaperDollUpdateOwnerData;
// clang-format on

namespace GeometryAtlas {

class DollRenderContextImpl : public ::GeometryAtlas::details::IPaperDollRenderContext {
public:
    // DollRenderContextImpl inner types declare
    // clang-format off
    struct NoOffsetRenderContext;
    // clang-format on

    // DollRenderContextImpl inner types define
    struct NoOffsetRenderContext : public ::PaperDollBaseActorRenderContext {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual float getYOffset(float screenScale) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCFOLD float $getYOffset(float screenScale);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PaperDollRenderer&>      mRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    DollRenderContextImpl& operator=(DollRenderContextImpl const&);
    DollRenderContextImpl(DollRenderContextImpl const&);
    DollRenderContextImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(::PaperDollUpdateOwnerData const& data) /*override*/;

    virtual void render(
        ::PaperDollRenderOwnerData const&    data,
        ::OffscreenCaptureDescription const* capture,
        bool                                 isRenderingUI
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(::PaperDollUpdateOwnerData const& data);

    MCAPI void
    $render(::PaperDollRenderOwnerData const& data, ::OffscreenCaptureDescription const* capture, bool isRenderingUI);
    // NOLINTEND
};

} // namespace GeometryAtlas
