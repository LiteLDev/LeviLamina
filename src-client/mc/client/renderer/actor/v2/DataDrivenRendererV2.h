#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
struct GameplayRelatedRenderData;
struct ProcessedDataDrivenRenderers;
struct RequestedDataDrivenRender;
// clang-format on

class DataDrivenRendererV2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ProcessedDataDrivenRenderers const*>       mV2BakedRenderers;
    ::ll::TypedStorage<1, 1, bool>                                        mRenderActorsWithAttachables;
    ::ll::TypedStorage<1, 1, bool>                                        mVersionLessThanOrEqualToVersion_1_16_210;
    ::ll::TypedStorage<8, 24, ::std::vector<::RequestedDataDrivenRender>> mRequestedActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                    mOnFireActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                    mLeashedActors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint generateFrame(::GameplayRelatedRenderData const& renderData);

    MCAPI bool
    tryAddActor(::Actor& actor, ::std::shared_ptr<::ActorRenderer> const& renderer, ::ShadowContext shadowContext);

    MCAPI ~DataDrivenRendererV2();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
