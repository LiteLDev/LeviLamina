#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOutputMessage.h"
#include "mc/server/commands/CommandOutputParameter.h"
#include "mc/server/commands/CommandPropertyBag.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"
#include "mc/server/commands/CommandOutputType.h"

class CommandOutput {
public:
    CommandOutputType                   mType;
    std::unique_ptr<CommandPropertyBag> mBag;
    std::vector<CommandOutputMessage>   mMessages;
    int                                 mSuccessCount;
    bool                                mHasPlayerText;

    // prevent constructor by default
    CommandOutput& operator=(CommandOutput const&);
    CommandOutput();

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
    // NOLINTBEGIN
    MCAPI CommandOutput(class CommandOutput const& rhs);

    MCAPI explicit CommandOutput(::CommandOutputType type);

    MCAPI void addToResultList(std::string const& key, class Actor const& element);

    MCAPI void addToResultList(std::string const& key, std::string const& element);

    MCAPI bool empty() const;

    MCAPI void forceOutput(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

    MCAPI class CommandPropertyBag const& getData() const;

    MCAPI std::vector<class CommandOutputMessage> const& getMessages() const;

    MCAPI int getSuccessCount() const;

    MCAPI ::CommandOutputType getType() const;

    MCAPI bool hasErrorMessage() const;

    MCAPI void load(
        ::CommandOutputType                         type,
        int                                         successCount,
        std::vector<class CommandOutputMessage>&&   messages,
        std::unique_ptr<class CommandPropertyBag>&& data
    );

    MCAPI void setHasPlayerText();

    MCAPI void success();

    MCAPI bool wantsData() const;

    MCAPI ~CommandOutput();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void addMessage(
        std::string const&                               msgId,
        std::vector<class CommandOutputParameter> const& params,
        ::CommandOutputMessageType                       type
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
