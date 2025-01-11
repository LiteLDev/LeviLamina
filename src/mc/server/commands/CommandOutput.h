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
    ::ll::TypedStorage<4, 4, int>                                     mSuccessCount;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPlayerText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutput(::CommandOutput const& rhs);

    MCAPI explicit CommandOutput(::CommandOutputType type);

    MCAPI void addMessage(
        ::std::string const&                           msgId,
        ::std::vector<::CommandOutputParameter> const& params,
        ::CommandOutputMessageType                     type
    );

    MCAPI void addToResultList(::std::string const& key, ::Actor const& element);

    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);

    MCAPI bool empty() const;

    MCAPI void error(::std::string const& msgId, ::std::vector<::CommandOutputParameter> const& params);

    MCAPI void forceOutput(::std::string const& msgId, ::std::vector<::CommandOutputParameter> const& params);

    MCFOLD ::CommandPropertyBag const& getData() const;

    MCFOLD ::std::vector<::CommandOutputMessage> const& getMessages() const;

    MCFOLD int getSuccessCount() const;

    MCFOLD ::CommandOutputType getType() const;

    MCAPI bool hasErrorMessage() const;

    MCAPI void load(
        ::CommandOutputType                       type,
        int                                       successCount,
        ::std::vector<::CommandOutputMessage>&&   messages,
        ::std::unique_ptr<::CommandPropertyBag>&& data
    );

    MCFOLD void setHasPlayerText();

    MCAPI void success();

    MCAPI void success(::std::string const& msgId, ::std::vector<::CommandOutputParameter> const& params);

    MCFOLD bool wantsData() const;

    MCAPI ~CommandOutput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOutput const& rhs);

    MCAPI void* $ctor(::CommandOutputType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
