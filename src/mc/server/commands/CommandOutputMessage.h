#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommandOutputMessageType>    mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mMessageId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mParams;
    // NOLINTEND

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
