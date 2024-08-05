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
    // vIndex: 0
    virtual ~I18nObserver() = default;

    // vIndex: 1
    virtual void onLanguageChanged(std::string const& code, bool languageSystemInitializing);

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void onLanguagesLoaded() = 0;

    // NOLINTEND
};
