#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/core/TypeWrapper.h"

struct DeathInfoPacketPayload {
public:
    // DeathInfoPacketPayload inner types declare
    // clang-format off
    struct TagDeathCauseMessageType;
    // clang-format on

    // DeathInfoPacketPayload inner types define
    struct TagDeathCauseMessageType {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk18942d;
    // NOLINTEND

public:
    // prevent constructor by default
    DeathInfoPacketPayload& operator=(DeathInfoPacketPayload const&);
    DeathInfoPacketPayload(DeathInfoPacketPayload const&);
    DeathInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DeathInfoPacketPayload& operator=(::DeathInfoPacketPayload&&);

    MCNAPI ~DeathInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
