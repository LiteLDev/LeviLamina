#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class PathPart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PATHPART
public:
    PathPart& operator=(PathPart const&) = delete;
    PathPart(PathPart const&)            = delete;
    PathPart()                           = delete;
#endif

public:
    /**
     * @symbol ??1PathPart\@Core\@\@QEAA\@XZ
     */
    MCAPI ~PathPart();
};

}; // namespace Core
