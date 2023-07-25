#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayRequest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYREQUEST
public:
    DelayRequest& operator=(DelayRequest const&) = delete;
    DelayRequest(DelayRequest const&)            = delete;
    DelayRequest()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0DelayRequest\@\@QEAA\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64);
    /**
     * @symbol ??1DelayRequest\@\@QEAA\@XZ
     */
    MCAPI ~DelayRequest();
};
