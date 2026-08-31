#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
struct DataDrivenRendererEntry;
// clang-format on

struct RequestedRenderEntries {
public:
    // RequestedRenderEntries inner types declare
    // clang-format off
    struct ActorRelatedData;
    // clang-format on

    // RequestedRenderEntries inner types define
    struct ActorRelatedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ShadowContext> mShadowContext;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererEntry>>                  mDataDrivenRenders;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                                   mActorsToRender;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderParams*>>                            mRenderParams;
    ::ll::TypedStorage<8, 24, ::std::vector<::RequestedRenderEntries::ActorRelatedData>> mActorRenderData;
    // NOLINTEND
};
