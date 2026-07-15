#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual void update(::PaperDollUpdateOwnerData const&) /*override*/;

    virtual void render(::PaperDollRenderOwnerData const&, ::OffscreenCaptureDescription const*, bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
