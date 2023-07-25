#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGENDPOINT
public:
    ContentLogEndPoint& operator=(ContentLogEndPoint const&) = delete;
    ContentLogEndPoint(ContentLogEndPoint const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGENDPOINT
    /**
     * @symbol ?log\@ContentLogEndPoint\@\@UEAAXPEBD\@Z
     */
    MCVAPI void log(char const*);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContentLogEndPoint();
#endif
    /**
     * @symbol ??0ContentLogEndPoint\@\@QEAA\@XZ
     */
    MCAPI ContentLogEndPoint();
};
