#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::v1_20_80 { struct DistanceEvent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                    mCreationEvents;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                    mExpirationEvents;
    ::ll::TypedStorage<8, 16, ::std::map<float, ::SharedTypes::v1_20_80::VectorEvents>> mTimelineEvents;
    ::ll::TypedStorage<8, 16, ::std::map<float, ::SharedTypes::v1_20_80::VectorEvents>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_80::DistanceEvent>>    mLoopingTravelDistanceEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~EmitterLifetimeEventsComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C EmitterLifetimeEventsComponent();

    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
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
    MCAPI_C void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
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
