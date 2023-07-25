#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingAreaDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREADESCRIPTION
public:
    TickingAreaDescription& operator=(TickingAreaDescription const&) = delete;
    TickingAreaDescription(TickingAreaDescription const&)            = delete;
    TickingAreaDescription()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?asString\@TickingAreaDescription\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @symbol ??1TickingAreaDescription\@\@QEAA\@XZ
     */
    MCAPI ~TickingAreaDescription();
};
