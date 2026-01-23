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

    using DeathCauseMessageType = ::TypeWrapper<
        ::std::pair<::std::string, ::std::vector<::std::string>>,
        ::DeathInfoPacketPayload::TagDeathCauseMessageType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::TypeWrapper<
            ::std::pair<::std::string, ::std::vector<::std::string>>,
            ::DeathInfoPacketPayload::TagDeathCauseMessageType>>
        mDeathCauseMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    DeathInfoPacketPayload(DeathInfoPacketPayload const&);
    DeathInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::DeathInfoPacketPayload& operator=(::DeathInfoPacketPayload const&);

    MCAPI ~DeathInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
