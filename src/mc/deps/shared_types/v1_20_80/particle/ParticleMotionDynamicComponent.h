#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionDynamicComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mLinearAccelerationExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mLinearDragCoefficientExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mRotationAccelerationExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                   mRotationDragCoefficientExpr;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionDynamicComponent& operator=(ParticleMotionDynamicComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleMotionDynamicComponent();

    MCAPI ParticleMotionDynamicComponent(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);

    MCAPI ParticleMotionDynamicComponent(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HashedString const& $getIdentifier() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
