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

struct EmitterLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaf8046;
    ::ll::UntypedStorage<8, 24> mUnk846fd1;
    ::ll::UntypedStorage<8, 16> mUnk442cc6;
    ::ll::UntypedStorage<8, 16> mUnk2f8e98;
    ::ll::UntypedStorage<8, 24> mUnk512f6e;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitterLifetimeEventsComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const /*override*/;

    // vIndex: 0
    virtual ~EmitterLifetimeEventsComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCNAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent& operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent& operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
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

}
