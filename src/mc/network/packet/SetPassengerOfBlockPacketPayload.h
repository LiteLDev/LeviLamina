#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/PassengerOfBlockArguments.h"
#include "mc/legacy/ActorUniqueID.h"

struct SetPassengerOfBlockPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mPassenger;
    ::ll::TypedStorage<4, 40, ::std::optional<::PassengerOfBlockArguments>> mPassengerOfBlockData;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& PASSENGER_BLOCK_DATA_ID();

    MCAPI static ::std::string_view const& PASSENGER_ID();
    // NOLINTEND
};
