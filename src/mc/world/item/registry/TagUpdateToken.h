#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {
public:
    // prevent constructor by default
    TagUpdateToken& operator=(TagUpdateToken const&);
    TagUpdateToken(TagUpdateToken const&);
    TagUpdateToken();

public:
    // NOLINTBEGIN
    // symbol: ??0TagUpdateToken@@QEAA@V?$weak_ptr@U?$atomic@H@std@@@std@@@Z
    MCAPI explicit TagUpdateToken(std::weak_ptr<std::atomic<int>>);

    // symbol: ??1TagUpdateToken@@QEAA@XZ
    MCAPI ~TagUpdateToken();

    // NOLINTEND
};
