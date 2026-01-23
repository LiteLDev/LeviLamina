#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOutputMessage.h"
#include "mc/server/commands/CommandOutputParameter.h"

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

    void error(std::string_view str) { mMessages.emplace_back(CommandOutputMessageType::Error, std::string{str}); }
    void success(std::string_view str) {
        mMessages.emplace_back(CommandOutputMessageType::Success, std::string{str});
        mSuccessCount++;
    }

    void error(std::string_view msgId, std::vector<class CommandOutputParameter> const& params) {
        std::vector<std::string> args;
        args.reserve(params.size());
        for (auto& param : params) {
            args.emplace_back(param);
        }
        mMessages.emplace_back(CommandOutputMessageType::Error, std::string{msgId}, std::move(args));
    }
    void success(std::string_view msgId, std::vector<class CommandOutputParameter> const& params) {
        std::vector<std::string> args;
        args.reserve(params.size());
        for (auto& param : params) {
            args.emplace_back(param);
        }
        mMessages.emplace_back(CommandOutputMessageType::Success, std::string{msgId}, std::move(args));
        mSuccessCount++;
    }

public:
    // prevent constructor by default
    CommandOutput();

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

    MCAPI void error(::std::string const& msgId, ::std::vector<::CommandOutputParameter> const& params);

    MCAPI ::CommandOutput& operator=(::CommandOutput const& rhs);

    MCAPI void success(::std::string const& msgId, ::std::vector<::CommandOutputParameter> const& params);

    MCAPI ~CommandOutput();
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
    MCAPI void* $ctor(::CommandOutput const& rhs);

    MCAPI void* $ctor(::CommandOutputType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
