#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/ProfileType.h"

struct PreviewedItemEventInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mPieceIndex;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mPieceId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCreatorName;
    ::ll::TypedStorage<4, 4, ::IMinecraftEventing::PromotionType> mPromotionType;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>              mProfileType;
    ::ll::TypedStorage<4, 4, int>                                 mRow;
    ::ll::TypedStorage<4, 4, int>                                 mCol;
    ::ll::TypedStorage<8, 8, double>                              mSecondsToLoad;
    ::ll::TypedStorage<1, 1, bool>                                mIsOwned;
    ::ll::TypedStorage<1, 1, bool>                                mEventSent;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviewedItemEventInformation(PreviewedItemEventInformation const&);
    PreviewedItemEventInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PreviewedItemEventInformation& operator=(::PreviewedItemEventInformation const&);

    MCAPI ~PreviewedItemEventInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
