#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

class ActorParticleEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>   mParticleEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mLocatorName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mInitializationScripts;
    ::ll::TypedStorage<1, 1, bool>              mBindToActor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorParticleEffect();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
