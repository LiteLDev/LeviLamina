/**
 * @file  DelayRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0DelayRequest\@\@QEAA\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64);
    /**
     * @symbol  ?executeAction\@DelayRequest\@\@QEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    /**
     * @symbol  ?getAction\@DelayRequest\@\@QEBA?AV?$not_null\@PEAVIRequestAction\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class IRequestAction *> getAction() const;
    /**
     * @symbol  ?getTickToExecuteOn\@DelayRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getTickToExecuteOn() const;
    /**
     * @symbol  ??ODelayRequest\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class DelayRequest const &) const;
    /**
     * @symbol  ??1DelayRequest\@\@QEAA\@XZ
     */
    MCAPI ~DelayRequest();

};