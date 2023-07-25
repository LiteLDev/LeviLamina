#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGUPDATETOKEN
public:
    TagUpdateToken& operator=(TagUpdateToken const&) = delete;
    TagUpdateToken(TagUpdateToken const&)            = delete;
    TagUpdateToken()                                 = delete;
#endif

public:
    /**
     * @symbol ??0TagUpdateToken\@\@QEAA\@V?$weak_ptr\@U?$atomic\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI TagUpdateToken(class std::weak_ptr<struct std::atomic<int>>);
    /**
     * @symbol ??1TagUpdateToken\@\@QEAA\@XZ
     */
    MCAPI ~TagUpdateToken();
};
