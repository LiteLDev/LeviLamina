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
     * @symbol ??0DelayRequest\@\@QEAA\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64);
    /**
     * @symbol ??1DelayRequest\@\@QEAA\@XZ
     */
    MCAPI ~DelayRequest();

};
