#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/enums/safety/ChatFloodingAction.h"
#include "mc/events/TextFilteringEvent.h"
#include "mc/world/events/TextProcessingEventOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommunitySiftProcessor {
public:
    // prevent constructor by default
    CommunitySiftProcessor& operator=(CommunitySiftProcessor const&);
    CommunitySiftProcessor(CommunitySiftProcessor const&);
    CommunitySiftProcessor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommunitySiftProcessor@@UEAA@XZ
    virtual ~CommunitySiftProcessor() = default;

    // vIndex: 1, symbol:
    // ?processAnonymousMessages@CommunitySiftProcessor@@UEAA?AVCallbackToken@@PEAVIMinecraftEventing@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken processAnonymousMessages(
        class IMinecraftEventing* eventing,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // vIndex: 2, symbol:
    // ?processMessages@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken processMessages(
        class Player const& player,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // vIndex: 3, symbol:
    // ?processAnonymousNonChatText@CommunitySiftProcessor@@UEAA?AVCallbackToken@@PEAVIMinecraftEventing@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken processAnonymousNonChatText(
        class IMinecraftEventing* eventing,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // vIndex: 4, symbol:
    // ?processNonChatText@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken processNonChatText(
        class Player const& player,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // vIndex: 5, symbol: ?processJoinEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
    virtual void processJoinEvent(class Player const& player);

    // vIndex: 6, symbol: ?processLeaveEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
    virtual void processLeaveEvent(class Player const& player);

    // vIndex: 7, symbol: ?onStartShutdown@CommunitySiftProcessor@@UEAAXXZ
    virtual void onStartShutdown();

    // symbol:
    // ??0CommunitySiftProcessor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVScheduler@@@Z
    MCAPI CommunitySiftProcessor(std::string const&, std::string const& serverId, class Scheduler&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_bootCheck@CommunitySiftProcessor@@AEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> _bootCheck(std::string const&);

    // symbol:
    // ?_createRequest@CommunitySiftProcessor@@AEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0PEAVIMinecraftEventing@@0W4TextProcessingEventOrigin@@V?$shared_ptr@V?$vector@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@@3@V?$shared_ptr@V?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@@3@_N0H@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> _createRequest(
        std::string const&        url,
        std::string const&        payload,
        class IMinecraftEventing* eventing,
        std::string const&,
        ::TextProcessingEventOrigin,
        std::shared_ptr<std::vector<std::pair<int, std::string>>> filteredMessages,
        std::shared_ptr<std::vector<::Safety::TextFilteringEvent>>,
        bool,
        std::string const& message,
        int
    );

    // symbol:
    // ?_processAnonymousMessages@CommunitySiftProcessor@@AEAA?AVCallbackToken@@PEAVIMinecraftEventing@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    MCAPI class CallbackToken _processAnonymousMessages(
        class IMinecraftEventing* eventing,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::string const&                                                                                     ruleId,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // symbol:
    // ?_processEvent@CommunitySiftProcessor@@AEAAXAEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _processEvent(class Player const&, ::TextProcessingEventOrigin, std::string const&);

    // symbol:
    // ?_processMessages@CommunitySiftProcessor@@AEAA?AVCallbackToken@@AEBVPlayer@@_NW4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    MCAPI class CallbackToken _processMessages(
        class Player const& player,
        bool,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::string const&                                                                                     ruleId,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // symbol:
    // ?_processMessages@CommunitySiftProcessor@@AEAA?AVCallbackToken@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PEAVIMinecraftEventing@@_NW4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEBV34@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@4@@Z
    MCAPI class CallbackToken _processMessages(
        std::string author,
        std::string,
        class IMinecraftEventing* eventing,
        bool,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&                                                                        messages,
        std::string const&                                                                                     ruleId,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback
    );

    // symbol: ?_validateCommunitySiftConfiguration@CommunitySiftProcessor@@AEAA_NXZ
    MCAPI bool _validateCommunitySiftConfiguration();

    // symbol:
    // ?_createConfigFromJson@CommunitySiftProcessor@@CA?AUCommunitySiftConfig@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct CommunitySiftConfig _createConfigFromJson(std::string const&);

    // symbol:
    // ?_processJsonEvents@CommunitySiftProcessor@@CA?BV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@AEBV?$vector@VValue@Json@@V?$allocator@VValue@Json@@@std@@@3@MW4ChatFloodingAction@Safety@@@Z
    MCAPI static std::vector<::Safety::TextFilteringEvent> const
    _processJsonEvents(std::vector<class Json::Value> const&, float, ::Safety::ChatFloodingAction);

    // NOLINTEND
};
