#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

namespace ParticleSystem {

struct EntityBindInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    ::ll::TypedStorage<8, 48, ::HashedString>  mLocator;
    ::ll::TypedStorage<4, 12, ::Vec3>          mOffset;
    // NOLINTEND
};

} // namespace ParticleSystem
