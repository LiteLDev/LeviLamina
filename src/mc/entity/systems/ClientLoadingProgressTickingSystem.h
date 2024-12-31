#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class EntityRegistry;
// clang-format on

class ClientLoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ClientLoadingProgressTickingSystem& operator=(ClientLoadingProgressTickingSystem const&);
    ClientLoadingProgressTickingSystem(ClientLoadingProgressTickingSystem const&);
    ClientLoadingProgressTickingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~ClientLoadingProgressTickingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ChunkPos> const& mChunksNeededForLoadOffsets();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
