/**
 * @file  MC/CommunitySiftProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommunitySiftProcessor.
 *
 */
class CommunitySiftProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMUNITYSIFTPROCESSOR
public:
    class CommunitySiftProcessor& operator=(class CommunitySiftProcessor const &) = delete;
    CommunitySiftProcessor(class CommunitySiftProcessor const &) = delete;
    CommunitySiftProcessor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CommunitySiftProcessor();
    /**
     * @hash   161108226
     * @vftbl  1
     * @symbol ?processMessages@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@0@Z@6@@Z
     */
    virtual class CallbackToken processMessages(class Player const &, enum TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    /**
     * @hash   1027961279
     * @vftbl  2
     * @symbol ?processCommandsAndNames@CommunitySiftProcessor@@UEAA?AVCallbackToken@@AEBVPlayer@@W4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@0@Z@6@@Z
     */
    virtual class CallbackToken processCommandsAndNames(class Player const &, enum TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    /**
     * @hash   1361862573
     * @vftbl  3
     * @symbol ?processJoinEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
     */
    virtual void processJoinEvent(class Player const &);
    /**
     * @hash   -53968532
     * @vftbl  4
     * @symbol ?processLeaveEvent@CommunitySiftProcessor@@UEAAXAEBVPlayer@@@Z
     */
    virtual void processLeaveEvent(class Player const &);
    /**
     * @hash   -1366402069
     * @vftbl  5
     * @symbol ?onStartShutdown@CommunitySiftProcessor@@UEAAXXZ
     */
    virtual void onStartShutdown();
    /**
     * @hash   -942117917
     * @symbol ??0CommunitySiftProcessor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVScheduler@@@Z
     */
    MCAPI CommunitySiftProcessor(std::string const &, std::string const &, class Scheduler &);

//private:
    /**
     * @symbol ?_createRequest@CommunitySiftProcessor@@AEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0PEAVIMinecraftEventing@@0W4TextProcessingEventOrigin@@V?$shared_ptr@V?$vector@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@@3@V?$shared_ptr@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@3@_N0H@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> _createRequest(std::string const &, std::string const &, class IMinecraftEventing *, std::string const &, enum TextProcessingEventOrigin, class std::shared_ptr<std::vector<struct std::pair<int, std::string>>>, class std::shared_ptr<std::vector<std::string>>, bool, std::string const &, int);
    /**
     * @hash   -1489203792
     * @symbol ?_processEvent@CommunitySiftProcessor@@AEAAXAEBVPlayer@@W4TextProcessingEventOrigin@@PEBVUserEntityIdentifierComponent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _processEvent(class Player const &, enum TextProcessingEventOrigin, class UserEntityIdentifierComponent const *, std::string const &);
    /**
     * @hash   674631626
     * @symbol ?_processMessages@CommunitySiftProcessor@@AEAA?AVCallbackToken@@AEBVPlayer@@_NW4TextProcessingEventOrigin@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@0@Z@6@@Z
     */
    MCAPI class CallbackToken _processMessages(class Player const &, bool, enum TextProcessingEventOrigin, std::vector<std::string> const &, std::string const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    /**
     * @hash   576416863
     * @symbol ?_validateCommunitySiftConfiguration@CommunitySiftProcessor@@AEAA_NXZ
     */
    MCAPI bool _validateCommunitySiftConfiguration();
    /**
     * @hash   -562134391
     * @symbol ?_createConfigFromJson@CommunitySiftProcessor@@CA?AUCommunitySiftConfig@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static struct CommunitySiftConfig _createConfigFromJson(std::string const &);

private:

};