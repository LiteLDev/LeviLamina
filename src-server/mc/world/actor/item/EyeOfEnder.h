#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
struct VariantParameterList;
// clang-format on

class EyeOfEnder : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mTarget;
    ::ll::TypedStorage<1, 1, bool> mSurviveAfterDeath;
    ::ll::TypedStorage<4, 4, int> mLife;
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 8
    virtual ~EyeOfEnder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void preNormalTick();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
