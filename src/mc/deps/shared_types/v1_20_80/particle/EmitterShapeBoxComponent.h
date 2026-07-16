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

struct EmitterShapeBoxComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>             mOffsetExpr;
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>             mHalfDimensions;
    ::ll::TypedStorage<1, 1, bool>                                                                 mSurfaceOnly;
    ::ll::TypedStorage<8, 168, ::std::optional<::SharedTypes::v1_20_80::ParticleEmitterDirection>> mDirection;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EmitterShapeBoxComponent();

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
    MCAPI EmitterShapeBoxComponent(::SharedTypes::v1_20_80::EmitterShapeBoxComponent&&);

    MCAPI EmitterShapeBoxComponent(::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&);

    MCAPI ::SharedTypes::v1_20_80::EmitterShapeBoxComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeBoxComponent&&);

    MCAPI ::SharedTypes::v1_20_80::EmitterShapeBoxComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&) const;
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeBoxComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&);
#endif
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
