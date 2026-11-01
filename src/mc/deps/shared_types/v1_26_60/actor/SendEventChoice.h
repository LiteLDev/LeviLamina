#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_60 { struct SendEventStage; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct SendEventChoice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                   mMinActivationRange;
    ::ll::TypedStorage<4, 4, float>                                                   mMaxActivationRange;
    ::ll::TypedStorage<4, 4, float>                                                   mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                   mWeight;
    ::ll::TypedStorage<1, 1, bool>                                                    mLookAtTarget;
    ::ll::TypedStorage<1, 1, bool>                                                    mDoCastingAnimation;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mStartSoundEvent;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>              mFilters;
    ::ll::TypedStorage<4, 4, float>                                                   mCastDuration;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::SendEventStage>> mSequence;
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>                            mParticleColor;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventChoice& operator=(SendEventChoice const&);
    SendEventChoice();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SendEventChoice(::SharedTypes::v1_26_60::SendEventChoice&&);

    MCNAPI SendEventChoice(::SharedTypes::v1_26_60::SendEventChoice const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_60::SendEventChoice const&) const;

    MCNAPI ~SendEventChoice();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_60::SendEventChoice&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_60::SendEventChoice const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
