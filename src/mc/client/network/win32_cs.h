#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_WIN32_CS
public:
    win32_cs& operator=(win32_cs const&) = delete;
    win32_cs(win32_cs const&)            = delete;
    win32_cs()                           = delete;
#endif

public:
    /**
     * @symbol ??1win32_cs\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~win32_cs();
};

}; // namespace xbox::httpclient
