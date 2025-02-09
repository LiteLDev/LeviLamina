#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

struct BlockPatternEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier const>           mEntityType;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mPos;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext> const>             mEntity;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    // NOLINTEND
};
