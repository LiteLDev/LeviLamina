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
    // symbol: ??0CommandOutput@@QEAA@AEBV0@@Z
    MCAPI CommandOutput(class CommandOutput const& rhs);

    // symbol: ??0CommandOutput@@QEAA@W4CommandOutputType@@@Z
    MCAPI explicit CommandOutput(enum CommandOutputType type);

    // symbol:
    // ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
    MCAPI void addToResultList(std::string const& key, class Actor const& element);

    // symbol: ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void addToResultList(std::string const& key, std::string const& element);

    // symbol:
    // ?error@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
    MCAPI void error(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

    // symbol:
    // ?forceOutput@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
    MCAPI void forceOutput(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

    // symbol: ?getData@CommandOutput@@QEBAAEBVCommandPropertyBag@@XZ
    MCAPI class CommandPropertyBag const& getData() const;

    // symbol:
    // ?getMessages@CommandOutput@@QEBAAEBV?$vector@VCommandOutputMessage@@V?$allocator@VCommandOutputMessage@@@std@@@std@@XZ
    MCAPI std::vector<class CommandOutputMessage> const& getMessages() const;

    // symbol: ?getSuccessCount@CommandOutput@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?getType@CommandOutput@@QEBA?AW4CommandOutputType@@XZ
    MCAPI ::CommandOutputType getType() const;

    // symbol: ?hasErrorMessage@CommandOutput@@QEBA_NXZ
    MCAPI bool hasErrorMessage() const;

    // symbol:
    // ?load@CommandOutput@@QEAAXW4CommandOutputType@@H$$QEAV?$vector@VCommandOutputMessage@@V?$allocator@VCommandOutputMessage@@@std@@@std@@$$QEAV?$unique_ptr@VCommandPropertyBag@@U?$default_delete@VCommandPropertyBag@@@std@@@4@@Z
    MCAPI void load(
        enum CommandOutputType                      type,
        int                                         successCount,
        std::vector<class CommandOutputMessage>&&   messages,
        std::unique_ptr<class CommandPropertyBag>&& data
    );

    // symbol: ?setHasPlayerText@CommandOutput@@QEAAXXZ
    MCAPI void setHasPlayerText();

    // symbol: ?success@CommandOutput@@QEAAXXZ
    MCAPI void success();

    // symbol:
    // ?success@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
    MCAPI void success(std::string const& msgId, std::vector<class CommandOutputParameter> const& params);

    // symbol: ?wantsData@CommandOutput@@QEBA_NXZ
    MCAPI bool wantsData() const;

    // symbol: ??1CommandOutput@@QEAA@XZ
    MCAPI ~CommandOutput();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?addMessage@CommandOutput@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@W4CommandOutputMessageType@@@Z
    MCAPI void addMessage(
        std::string const&                               msgId,
        std::vector<class CommandOutputParameter> const& params,
        enum CommandOutputMessageType                    type
    );

    // NOLINTEND
};
