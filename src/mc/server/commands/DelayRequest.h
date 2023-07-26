#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayRequest {

public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&) = delete;
    DelayRequest(DelayRequest const&)            = delete;
    DelayRequest()                               = delete;

public:
    /**
     * @symbol
     * ??0DelayRequest\@\@QEAA\@V?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64); // NOLINT
    /**
     * @symbol ??1DelayRequest\@\@QEAA\@XZ
     */
    MCAPI ~DelayRequest(); // NOLINT
};
