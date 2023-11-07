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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NpcI18nObserver() = default;

    // vIndex: 1, symbol:
    // ?onLanguageChanged@NpcI18nObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void onLanguageChanged(std::string const&, bool);

    // symbol: ?onLanguageKeywordsLoadedFromPack@NpcI18nObserver@@UEAAXAEBVPackManifest@@@Z
    MCVAPI void onLanguageKeywordsLoadedFromPack(class PackManifest const&);

    // symbol: ?onLanguagesLoaded@NpcI18nObserver@@UEAAXXZ
    MCVAPI void onLanguagesLoaded();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_loadNpcData@NpcI18nObserver@@AEAAXXZ
    MCAPI void _loadNpcData();

    // NOLINTEND
};
