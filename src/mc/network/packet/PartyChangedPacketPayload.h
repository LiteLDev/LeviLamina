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
#ifdef LL_PLAT_C
    MCAPI explicit PartyChangedPacketPayload(::std::string partyId);
#endif

    MCFOLD ::PartyChangedPacketPayload& operator=(::PartyChangedPacketPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string partyId);
#endif
    // NOLINTEND
};
