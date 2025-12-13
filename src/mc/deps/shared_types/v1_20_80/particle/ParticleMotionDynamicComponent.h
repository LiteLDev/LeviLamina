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

struct ParticleMotionDynamicComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnkd970c4;
    ::ll::UntypedStorage<8, 48>  mUnk51db4d;
    ::ll::UntypedStorage<8, 48>  mUnkf6dc7e;
    ::ll::UntypedStorage<8, 48>  mUnkbb78d9;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionDynamicComponent& operator=(ParticleMotionDynamicComponent const&);
    ParticleMotionDynamicComponent(ParticleMotionDynamicComponent const&);
    ParticleMotionDynamicComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~ParticleMotionDynamicComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleMotionDynamicComponent(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionDynamicComponent&&);
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
