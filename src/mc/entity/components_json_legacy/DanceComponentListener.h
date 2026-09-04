#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Level;
struct SoundEventIdentifier;
// clang-format on

class DanceComponentListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mOwnerID;
    ::ll::TypedStorage<4, 4, float>                                  mListenDistance;
    ::ll::TypedStorage<8, 8, ::Level*>                               mLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundEventIdentifier>> mDanceableSoundEvents;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mSoundPos;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mLevelSoundEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setLevel(::Level& level);

    MCAPI ~DanceComponentListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
