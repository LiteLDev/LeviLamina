#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::CommandOutputMessageType   mType;
    ::std::string                mMessageId;
    ::std::vector<::std::string> mParams;
    // NOLINTEND

    CommandOutputMessage(
        ::CommandOutputMessageType   type,
        ::std::string                messageId,
        ::std::vector<::std::string> params = {}
    )
    : mType(type),
      mMessageId(std::move(messageId)),
      mParams(std::move(params)) {}

public:
    // prevent constructor by default
    CommandOutputMessage& operator=(CommandOutputMessage const&);
    CommandOutputMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutputMessage(::CommandOutputMessage const& rhs);

#ifdef LL_PLAT_C
    MCAPI ::std::string getUserMessage() const;
#endif

    MCAPI bool operator==(::CommandOutputMessage const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOutputMessage const& rhs);
    // NOLINTEND
};
