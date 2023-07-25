#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResolvedTextObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOLVEDTEXTOBJECT
public:
    ResolvedTextObject& operator=(ResolvedTextObject const&) = delete;
    ResolvedTextObject(ResolvedTextObject const&)            = delete;
    ResolvedTextObject()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?getAsJsonString\@ResolvedTextObject\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAsJsonString() const;
    /**
     * @symbol ??1ResolvedTextObject\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedTextObject();
};
