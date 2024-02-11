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
    // vIndex: 0, symbol: __gen_??1NpcI18nObserver@@UEAA@XZ
    virtual ~NpcI18nObserver() = default;

    // vIndex: 1, symbol:
    // ?onLanguageChanged@NpcI18nObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void onLanguageChanged(std::string const& code, bool languageSystemInitializing);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?onLanguagesLoaded@NpcI18nObserver@@UEAAXXZ
    virtual void onLanguagesLoaded();

    // symbol: ?onLanguageKeywordsLoadedFromPack@NpcI18nObserver@@UEAAXAEBVPackManifest@@@Z
    MCVAPI void onLanguageKeywordsLoadedFromPack(class PackManifest const& manifest);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_loadNpcData@NpcI18nObserver@@AEAAXXZ
    MCAPI void _loadNpcData();

    // NOLINTEND
};
