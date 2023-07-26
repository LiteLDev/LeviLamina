#pragma once

#include "mc/_HeaderOutputPredefine.h"

class I18nObserver {

public:
    // prevent constructor by default
    I18nObserver& operator=(I18nObserver const&) = delete;
    I18nObserver(I18nObserver const&)            = delete;
    I18nObserver()                               = delete;
};
