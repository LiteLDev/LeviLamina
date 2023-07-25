#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs_autolock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_WIN32_CS_AUTOLOCK
public:
    win32_cs_autolock& operator=(win32_cs_autolock const&) = delete;
    win32_cs_autolock(win32_cs_autolock const&)            = delete;
    win32_cs_autolock()                                    = delete;
#endif

public:
    /**
     * @symbol ??1win32_cs_autolock\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~win32_cs_autolock();
};

}; // namespace xbox::httpclient
