#pragma once

#include "ll/api/i18n/I18nAPI.h"
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

    template <ll::concepts::IsString S, class First, typename... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    inline void success(S const& fmt, First&& arg, Args&&... args) {
        success(fmt::format(fmt::runtime(fmt), std::forward<First>(arg), std::forward<Args>(args)...));
    }

    template <ll::concepts::IsString S, class First, typename... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    inline void error(S const& fmt, First&& arg, Args&&... args) {
        error(fmt::format(fmt::runtime(fmt), std::forward<First>(arg), std::forward<Args>(args)...));
    }

public:
    // NOLINTBEGIN
    // symbol: ??0CommandOutput@@QEAA@AEBV0@@Z
    MCAPI CommandOutput(class CommandOutput const& rhs);

    // symbol: ??0CommandOutput@@QEAA@W4CommandOutputType@@@Z
    MCAPI explicit CommandOutput(::CommandOutputType type);

    // symbol:
    // ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
    MCAPI void addToResultList(std::string const& key, class Actor const& element);

    // symbol: ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void addToResultList(std::string const& key, std::string const& element);

    // symbol:
    // ?error@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
    MCAPI void error(std::string const& msgId, std::vector<class CommandOutputParameter> const& params = {});

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
        ::CommandOutputType                         type,
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
    MCAPI void success(std::string const& msgId, std::vector<class CommandOutputParameter> const& params = {});

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
        ::CommandOutputMessageType                       type
    );

    // NOLINTEND
};
