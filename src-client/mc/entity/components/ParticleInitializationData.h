#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

struct ParticleInitializationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>   mAnimationControllerName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mLocator;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mInitializationScript;
    ::ll::TypedStorage<1, 1, bool>              mBind;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleInitializationData& operator=(ParticleInitializationData const&);
    ParticleInitializationData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleInitializationData(::ParticleInitializationData const&);

    MCAPI ParticleInitializationData(::ParticleInitializationData&&);

    MCAPI ~ParticleInitializationData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ParticleInitializationData const&);

    MCAPI void* $ctor(::ParticleInitializationData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
