#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::v1_20_80 { struct DistanceEvent; }
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EmitterLifetimeEventsComponent();

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
    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
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
