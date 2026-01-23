#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ContainerID.h"

struct UpdateTradePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayName;
    ::ll::TypedStorage<4, 4, int>                                  mSize;
    ::ll::TypedStorage<4, 4, int>                                  mTraderTier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mLastTradingPlayer;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                       mData;
    ::ll::TypedStorage<1, 1, bool>                                 mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>                                 mUsingEconomyTrade;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateTradePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateTradePacketPayload(::UpdateTradePacketPayload&&);

    MCAPI UpdateTradePacketPayload(::UpdateTradePacketPayload const& other);

    MCAPI ::UpdateTradePacketPayload& operator=(::UpdateTradePacketPayload&&);

    MCAPI ::UpdateTradePacketPayload& operator=(::UpdateTradePacketPayload const& other);

    MCAPI ~UpdateTradePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UpdateTradePacketPayload&&);

    MCAPI void* $ctor(::UpdateTradePacketPayload const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
