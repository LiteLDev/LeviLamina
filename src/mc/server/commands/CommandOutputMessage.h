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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutputMessage(::CommandOutputMessage const& rhs);

    MCAPI CommandOutputMessage(::CommandOutputMessage&& rhs);

    MCAPI CommandOutputMessage(
        ::CommandOutputMessageType     type,
        ::std::string const&           msgId,
        ::std::vector<::std::string>&& params = {}
    );

    MCAPI ::std::string const& getMessageId() const;

    MCAPI ::std::vector<::std::string> const& getParams() const;

    MCAPI ::CommandOutputMessageType getType() const;

    MCAPI ~CommandOutputMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOutputMessage const& rhs);

    MCAPI void* $ctor(::CommandOutputMessage&& rhs);

    MCAPI void*
    $ctor(::CommandOutputMessageType type, ::std::string const& msgId, ::std::vector<::std::string>&& params);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
