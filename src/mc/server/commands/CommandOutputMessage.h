#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    CommandOutputMessageType mType;
    std::string              mMessageId;
    std::vector<std::string> mParams;

    // prevent constructor by default
    CommandOutputMessage& operator=(CommandOutputMessage const&);
    CommandOutputMessage();

public:
    // NOLINTBEGIN
    // symbol: ??0CommandOutputMessage@@QEAA@$$QEAV0@@Z
    MCAPI CommandOutputMessage(class CommandOutputMessage&& rhs);

    // symbol: ??0CommandOutputMessage@@QEAA@AEBV0@@Z
    MCAPI CommandOutputMessage(class CommandOutputMessage const& rhs);

    // symbol:
    // ??0CommandOutputMessage@@QEAA@W4CommandOutputMessageType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI
    CommandOutputMessage(::CommandOutputMessageType type, std::string const& msgId, std::vector<std::string>&& params);

    // symbol:
    // ?getMessageId@CommandOutputMessage@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getMessageId() const;

    // symbol:
    // ?getParams@CommandOutputMessage@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getParams() const;

    // symbol: ?getType@CommandOutputMessage@@QEBA?AW4CommandOutputMessageType@@XZ
    MCAPI ::CommandOutputMessageType getType() const;

    // symbol: ??1CommandOutputMessage@@QEAA@XZ
    MCAPI ~CommandOutputMessage();

    // NOLINTEND
};
