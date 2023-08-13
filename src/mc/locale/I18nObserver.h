#pragma once

#include "mc/_HeaderOutputPredefine.h"

class I18nObserver {

public:
    // prevent constructor by default
    I18nObserver& operator=(I18nObserver const&) = delete;
    I18nObserver(I18nObserver const&)            = delete;
    I18nObserver()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onLanguageChanged\@NpcI18nObserver\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void onLanguageChanged(std::string const&, bool);
    // NOLINTEND
};
