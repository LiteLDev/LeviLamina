#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResolvedTextObject {

public:
    // prevent constructor by default
    ResolvedTextObject& operator=(ResolvedTextObject const&) = delete;
    ResolvedTextObject(ResolvedTextObject const&)            = delete;
    ResolvedTextObject()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getAsJsonString\@ResolvedTextObject\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAsJsonString() const;
    /**
     * @symbol ??1ResolvedTextObject\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedTextObject();
    // NOLINTEND
};
