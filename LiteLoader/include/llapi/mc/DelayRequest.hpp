/**
 * @file  MC/DelayRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayRequest.
 *
 */
class DelayRequest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYREQUEST
public:
    class DelayRequest& operator=(class DelayRequest const &) = delete;
    DelayRequest(class DelayRequest const &) = delete;
    DelayRequest() = delete;
#endif

public:
    /**
     * @hash   -1196408387
     * @symbol ??0DelayRequest@@QEAA@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@_K@Z
     */
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64);
    /**
     * @hash   -1322602959
     * @symbol ?executeAction@DelayRequest@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    /**
     * @hash   714368333
     * @symbol ?getAction@DelayRequest@@QEBA?AV?$not_null@PEAVIRequestAction@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class IRequestAction *> getAction() const;
    /**
     * @hash   -2094692563
     * @symbol ?getTickToExecuteOn@DelayRequest@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getTickToExecuteOn() const;
    /**
     * @hash   -381310546
     * @symbol ??ODelayRequest@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>(class DelayRequest const &) const;
    /**
     * @hash   2054763910
     * @symbol ??1DelayRequest@@QEAA@XZ
     */
    MCAPI ~DelayRequest();

};