#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"

class NpcI18nObserver : public ::I18nObserver {
public:
    // prevent constructor by default
    NpcI18nObserver& operator=(NpcI18nObserver const&);
    NpcI18nObserver(NpcI18nObserver const&);
    NpcI18nObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcI18nObserver() = default;

    // vIndex: 1
    virtual void onLanguageChanged(std::string const& code, bool languageSystemInitializing);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void onLanguagesLoaded();

    MCVAPI void onLanguageKeywordsLoadedFromPack(class PackManifest const& manifest);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _loadNpcData();

    // NOLINTEND
};
