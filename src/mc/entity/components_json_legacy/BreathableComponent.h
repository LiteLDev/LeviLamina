#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockDescriptor;
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
    ::ll::TypedStorage<1, 1, bool>                                   mCanDehydrate;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupply;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupplyMax;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>      mBreathableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>      mNonBreathableBlocks;
    ::ll::TypedStorage<4, 4, ::BreathableComponent::BreathableState> mBreathableState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canBreathe(::Actor const& owner) const;

    MCNAPI void setAirSupply(short supply);

    MCNAPI void updateBreathableState(::Actor& owner);

    MCNAPI ~BreathableComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
