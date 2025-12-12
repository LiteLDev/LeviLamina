#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class BlockSourceComponent;
class ChunkPos;
class DimensionStateComponent;
class EntityRegistry;
class IBlockSource;
class LoadedChunksComponent;
class LoadingStateComponent;
// clang-format on

class ClientLoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~ClientLoadingProgressTickingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _calculateLoadingProgressView(
        ::ActorOwnerComponent&     actorOwnerComponent,
        ::BlockSourceComponent&    blockSourceComponent,
        ::DimensionStateComponent& dimensionStateComponent,
        ::LoadedChunksComponent&   loadedChunksComponent,
        ::LoadingStateComponent&   loadingStateComponent,
        bool                       isTextureGroupReloading
    );

    MCNAPI_C static bool _hasLoadedEnoughChunksToView(
        ::Actor const&                   actor,
        ::IBlockSource&                  region,
        ::DimensionStateComponent const& dimensionStateComponent
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ChunkPos> const& mChunksNeededForLoadOffsets();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $tick(::EntityRegistry& registry);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
