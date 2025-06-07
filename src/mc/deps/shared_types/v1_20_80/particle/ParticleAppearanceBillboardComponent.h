#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleAppearanceBillboardComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>  mUnk252f0f;
    ::ll::UntypedStorage<8, 56>  mUnk551eba;
    ::ll::UntypedStorage<8, 168> mUnk1ea376;
    ::ll::UntypedStorage<8, 392> mUnkc1f356;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleAppearanceBillboardComponent& operator=(ParticleAppearanceBillboardComponent const&);
    ParticleAppearanceBillboardComponent(ParticleAppearanceBillboardComponent const&);
    ParticleAppearanceBillboardComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const /*override*/;

    // vIndex: 0
    virtual ~ParticleAppearanceBillboardComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleAppearanceBillboardComponent(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
