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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~I18nObserver() = default;

    // vIndex: 1, symbol:
    // ?onLanguageChanged@NpcI18nObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void onLanguageChanged(std::string const&, bool);

    // NOLINTEND
};
