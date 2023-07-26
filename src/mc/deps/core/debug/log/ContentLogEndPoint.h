#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {

public:
    // prevent constructor by default
    ContentLogEndPoint& operator=(ContentLogEndPoint const&) = delete;
    ContentLogEndPoint(ContentLogEndPoint const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGENDPOINT
    /**
     * @symbol ?log\@ContentLogEndPoint\@\@UEAAXPEBD\@Z
     */
    MCVAPI void log(char const*); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContentLogEndPoint(); // NOLINT
#endif
    /**
     * @symbol ??0ContentLogEndPoint\@\@QEAA\@XZ
     */
    MCAPI ContentLogEndPoint(); // NOLINT
};
