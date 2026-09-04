#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class LevelChunk;
struct TickingSystemWithInfo;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // LevelChunkTickingSystem inner types define
    using LevelChunks = ::std::vector<::std::shared_ptr<::LevelChunk>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksToTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksBlockEntitiesToTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createPlayerPassengerSystem();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);


    // NOLINTEND
};
