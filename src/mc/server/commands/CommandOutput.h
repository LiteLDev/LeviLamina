#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"
#include "mc/server/commands/CommandOutputType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOutputMessage;
class CommandOutputParameter;
class CommandPropertyBag;
// clang-format on

class CommandOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommandOutputType>                     mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandPropertyBag>> mBag;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandOutputMessage>>  mMessages;
    ::ll::TypedStorage<4, 4, uint>                                    mSuccessCount;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPlayerText;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutput();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutput(::CommandOutput const& rhs);

    MCAPI explicit CommandOutput(::CommandOutputType type);

    MCAPI void addMessage(
        ::std::string_view                             msgId,
        ::std::vector<::CommandOutputParameter> const& params,
        ::CommandOutputMessageType                     type
    );

#ifdef LL_PLAT_S
    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);
#endif

    MCAPI void addToResultList(::std::string const& key, ::Actor const& element);

    MCAPI ::CommandOutput& operator=(::CommandOutput const& rhs);

    MCAPI void success(::std::string_view msgId, ::std::vector<::CommandOutputParameter> const& params);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _mDataSetter(::CommandOutput& payload, ::std::optional<::std::string> jsonString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOutput const& rhs);

    MCAPI void* $ctor(::CommandOutputType type);
    // NOLINTEND
};
