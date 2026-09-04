#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BreathableComponent {
public:
    // BreathableComponent inner types define
    enum class BreathableState : int {
        InAir                        = 0,
        InWater                      = 1,
        InLava                       = 2,
        InSolids                     = 3,
        InBreathableOverrideBlock    = 4,
        InNonBreathableOverrideBlock = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mSuffocateTime;
    ::ll::TypedStorage<4, 4, float>                                  mInhaleTime;
    ::ll::TypedStorage<4, 4, int>                                    mAirRegenPerTick;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesAir;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesWater;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesLava;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesSolids;
    ::ll::TypedStorage<1, 1, bool>                                   mGeneratesBubbles;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupply;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupplyMax;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>      mBreathableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>      mNonBreathableBlocks;
    ::ll::TypedStorage<4, 4, ::BreathableComponent::BreathableState> mBreathableState;
    // NOLINTEND

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&);
    BreathableComponent(BreathableComponent const&);
    BreathableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canBreathe(::Actor const& owner) const;

    MCAPI ::BreathableComponent& operator=(::BreathableComponent&&);

    MCAPI void updateBreathableState(::Actor& owner);

    MCAPI ~BreathableComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
