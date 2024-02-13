#pragma once

#include "mc/_HeaderOutputPredefine.h"

class I18nObserver {
public:
    // prevent constructor by default
    I18nObserver& operator=(I18nObserver const&);
    I18nObserver(I18nObserver const&);
    I18nObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1I18nObserver@@UEAA@XZ
    virtual ~I18nObserver() = default;

    // vIndex: 1, symbol:
    // ?onLanguageChanged@NpcI18nObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void onLanguageChanged(std::string const& code, bool languageSystemInitializing);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: ?onLanguagesLoaded@NpcI18nObserver@@UEAAXXZ
    virtual void onLanguagesLoaded() = 0;

    // NOLINTEND
};
