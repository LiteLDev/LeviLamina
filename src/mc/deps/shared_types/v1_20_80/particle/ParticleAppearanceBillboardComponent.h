#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionSettings.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/UV.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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

public:
    // prevent constructor by default
    ParticleAppearanceBillboardComponent& operator=(ParticleAppearanceBillboardComponent const&);
    ParticleAppearanceBillboardComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~ParticleAppearanceBillboardComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleAppearanceBillboardComponent(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);

    MCAPI ParticleAppearanceBillboardComponent(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);
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
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&);
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
