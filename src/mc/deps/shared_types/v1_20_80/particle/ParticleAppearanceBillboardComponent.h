#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionSettings.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/UV.h"

namespace SharedTypes::v1_20_80 {

struct ParticleAppearanceBillboardComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>>       mSizeExpr;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>>                              mFacing;
    ::ll::TypedStorage<8, 168, ::std::optional<::SharedTypes::v1_20_80::DirectionSettings>> mDirection;
    ::ll::TypedStorage<8, 392, ::std::optional<::SharedTypes::v1_20_80::UV>>                mUV;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ParticleAppearanceBillboardComponent();

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
    MCAPI ParticleAppearanceBillboardComponent(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);
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
