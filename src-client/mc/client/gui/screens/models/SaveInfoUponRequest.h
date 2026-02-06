#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PieceOfferWrapper.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/PieceSide.h"

struct SaveInfoUponRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle> mCharacterHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>           mSaveRequestCallback;
    ::ll::TypedStorage<8, 16, ::persona::PieceOfferWrapper>      mEquippedOffer;
    ::ll::TypedStorage<8, 32, ::std::string>                     mInitiallyEquippedId;
    ::ll::TypedStorage<4, 4, ::persona::PieceSide>               mPieceSide;
    ::ll::TypedStorage<4, 4, int>                                mSelectedEmoteSlot;
    // NOLINTEND
};
