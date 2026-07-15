#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterLifetimeLoopingComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mActivationTimeExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mSleepTimeExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::HashedString const& $getIdentifier() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
