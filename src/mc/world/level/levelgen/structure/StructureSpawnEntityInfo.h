#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

struct StructureSpawnEntityInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                        mRotation;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>          mVariant;
    // NOLINTEND
};
