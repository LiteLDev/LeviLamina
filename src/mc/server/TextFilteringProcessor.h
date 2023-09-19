#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/events/TextFilteringEvent.h"
#include "mc/world/events/TextProcessingEventOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class TextFilteringProcessor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    TextFilteringProcessor& operator=(TextFilteringProcessor const&);
    TextFilteringProcessor(TextFilteringProcessor const&);
    TextFilteringProcessor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?processAnonymousMessages@CommunitySiftProcessor@@UEAA?AVCallbackToken@@PEAVIMinecraftEventing@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken
    processAnonymousMessages(class IMinecraftEventing*, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 2, symbol:
    // ?processMessages@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken
    processMessages(class Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 3, symbol:
    // ?processAnonymousNonChatText@CommunitySiftProcessor@@UEAA?AVCallbackToken@@PEAVIMinecraftEventing@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken
    processAnonymousNonChatText(class IMinecraftEventing*, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 4, symbol:
    // ?processNonChatText@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@2@@Z@6@@Z
    virtual class CallbackToken
    processNonChatText(class Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 5, symbol: ?processJoinEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
    virtual void processJoinEvent(class Player const&) = 0;

    // vIndex: 6, symbol: ?processLeaveEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
    virtual void processLeaveEvent(class Player const&) = 0;

    // vIndex: 7, symbol: ?onStartShutdown@CommunitySiftProcessor@@UEAAXXZ
    virtual void onStartShutdown() = 0;

    // symbol: ??1TextFilteringProcessor@@UEAA@XZ
    MCVAPI ~TextFilteringProcessor();

    // NOLINTEND
};
