#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PartyChangedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPartyId;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChangedPacketPayload& operator=(PartyChangedPacketPayload const&);
    PartyChangedPacketPayload(PartyChangedPacketPayload const&);
    PartyChangedPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PartyChangedPacketPayload& operator=(::PartyChangedPacketPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::std::string partyId);
    // NOLINTEND
};
