#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEmitterDirection.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EmitterShapeSphereComponent();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCNAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);
#endif

    MCNAPI bool operator==(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
