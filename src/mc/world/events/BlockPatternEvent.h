#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
class EntityContext;
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

public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&);
    BlockPatternEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPatternEvent(::BlockPatternEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPatternEvent const&);
    // NOLINTEND
};
