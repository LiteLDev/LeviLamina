#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct Components {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_URL_COMPONENTS
public:
    Components& operator=(Components const&) = delete;
    Components(Components const&)            = delete;
    Components()                             = delete;
#endif

public:
    /**
     * @symbol ??1Components\@Url\@Util\@\@QEAA\@XZ
     */
    MCAPI ~Components();
};

}; // namespace Util::Url
