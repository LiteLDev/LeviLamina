#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {

public:
    // prevent constructor by default
    TagUpdateToken& operator=(TagUpdateToken const&) = delete;
    TagUpdateToken(TagUpdateToken const&)            = delete;
    TagUpdateToken()                                 = delete;

public:
    /**
     * @symbol ??0TagUpdateToken\@\@QEAA\@V?$weak_ptr\@U?$atomic\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI TagUpdateToken(class std::weak_ptr<struct std::atomic<int>>); // NOLINT
    /**
     * @symbol ??1TagUpdateToken\@\@QEAA\@XZ
     */
    MCAPI ~TagUpdateToken(); // NOLINT
};
