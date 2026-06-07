#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOutputMessage.h"
#include "mc/server/commands/CommandOutputParameter.h"
#include "mc/server/commands/CommandPropertyBag.h"

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
    CommandOutputType                   mType;
    std::unique_ptr<CommandPropertyBag> mBag;
    std::vector<CommandOutputMessage>   mMessages;
    uint                                 mSuccessCount;
    bool                                mHasPlayerText;
    // NOLINTEND

    template <class First, class... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    void success(fmt::format_string<First, Args...> fmt, First&& _args, Args&&... args) {
        success(fmt::vformat(fmt.get(), fmt::make_format_args(_args, args...)));
    }

    template <class First, class... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    void error(fmt::format_string<First, Args...> fmt, First&& _args, Args&&... args) {
        error(fmt::vformat(fmt.get(), fmt::make_format_args(_args, args...)));
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutput();

    MCAPI CommandOutput(::CommandOutput const& rhs);

    MCAPI explicit CommandOutput(::CommandOutputType type);

    MCAPI void addMessage(
        ::std::string_view                             msgId,
        ::std::vector<::CommandOutputParameter> const& params,
        ::CommandOutputMessageType                     type
    );

    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);

    MCAPI void addToResultList(::std::string const& key, ::Actor const& element);

    MCAPI bool empty() const;

    MCAPI void error(::std::string_view msgId, ::std::vector<::CommandOutputParameter> const& params = {});

    MCAPI void forceOutput(::std::string_view msgId, ::std::vector<::CommandOutputParameter> const& params = {});

    MCFOLD ::CommandPropertyBag const& getData() const;

    MCFOLD ::std::vector<::CommandOutputMessage> const& getMessages() const;

    MCFOLD uint getSuccessCount() const;

    MCAPI bool hasErrorMessage() const;

#ifdef LL_PLAT_S
    MCFOLD bool hasPlayerText() const;
#endif

    MCAPI ::CommandOutput& operator=(::CommandOutput const& rhs);

    MCAPI bool operator==(::CommandOutput const& other) const;

    MCFOLD void setHasPlayerText();

    MCAPI void success();

    MCAPI void success(::std::string_view msgId, ::std::vector<::CommandOutputParameter> const& params = {});

    MCAPI bool wantsData() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> _mDataGetter(::CommandOutput const& payload);

    MCAPI static void _mDataSetter(::CommandOutput& payload, ::std::optional<::std::string> jsonString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CommandOutput const& rhs);

    MCAPI void* $ctor(::CommandOutputType type);
    // NOLINTEND
};
