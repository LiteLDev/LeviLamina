#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"
#include "mc/server/commands/CommandOutputType.h"

class CommandOutput {
public:
    // prevent constructor by default
    CommandOutput& operator=(CommandOutput const&);
    CommandOutput();

public:
    // NOLINTBEGIN
    MCAPI CommandOutput(class CommandOutput const& rhs);

    MCAPI explicit CommandOutput(::CommandOutputType type);

    MCAPI void addToResultList(std::string const& key, class Actor const& element);

    MCAPI void addToResultList(std::string const& key, std::string const& element);

    MCAPI bool empty() const;

    MCAPI void error(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

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

    MCAPI void success(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

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
