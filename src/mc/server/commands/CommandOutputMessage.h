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
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutputMessage();

    MCAPI CommandOutputMessage(::CommandOutputMessage&& rhs);

    MCAPI CommandOutputMessage(::CommandOutputMessage const& rhs);

    MCFOLD ::std::string const& getMessageId() const;

    MCFOLD ::std::vector<::std::string> const& getParams() const;

    MCFOLD ::CommandOutputMessageType getType() const;

#ifdef LL_PLAT_S
    MCAPI ::std::string getUserMessage() const;
#endif

    MCAPI ::CommandOutputMessage& operator=(::CommandOutputMessage&& rhs);

    MCAPI ::CommandOutputMessage& operator=(::CommandOutputMessage const& rhs);

    MCAPI bool operator==(::CommandOutputMessage const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _mSuccessfulGetter(::CommandOutputMessage const& payload);

    MCAPI static void _mSuccessfulSetter(::CommandOutputMessage& payload, bool success);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::CommandOutputMessage&& rhs);

    MCAPI void* $ctor(::CommandOutputMessage const& rhs);
    // NOLINTEND
};
