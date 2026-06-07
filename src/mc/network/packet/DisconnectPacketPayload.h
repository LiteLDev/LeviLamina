#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/DisconnectPacketMessages.h"

struct DisconnectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>                              mReason;
    ::ll::TypedStorage<8, 72, ::std::variant<::DisconnectPacketMessages, ::cereal::NullType>> mMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisconnectPacketPayload(
        ::Connection::DisconnectFailReason reason,
        ::std::optional<::std::string>     message,
        ::std::optional<::std::string>     filteredMessage
    );

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::std::string> getFilteredMessage() const;

    MCAPI ::std::string getMessage() const;

    MCFOLD bool shouldSkipMessages() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Connection::DisconnectFailReason reason,
        ::std::optional<::std::string>     message,
        ::std::optional<::std::string>     filteredMessage
    );
    // NOLINTEND
};
