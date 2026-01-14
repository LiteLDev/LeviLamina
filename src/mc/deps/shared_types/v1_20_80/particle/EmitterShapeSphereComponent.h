#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEmitterDirection.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterShapeSphereComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>             mOffsetExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                               mRadiusExpr;
    ::ll::TypedStorage<1, 1, bool>                                                                 mSurfaceOnly;
    ::ll::TypedStorage<8, 168, ::std::optional<::SharedTypes::v1_20_80::ParticleEmitterDirection>> mDirection;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitterShapeSphereComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~EmitterShapeSphereComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);

    MCAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);
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
    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
