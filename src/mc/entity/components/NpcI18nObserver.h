#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NpcI18nObserver {

public:
    // prevent constructor by default
    NpcI18nObserver& operator=(NpcI18nObserver const&) = delete;
    NpcI18nObserver(NpcI18nObserver const&)            = delete;
    NpcI18nObserver()                                  = delete;

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCI18NOBSERVER
    /**
     * @symbol ?onLanguageKeywordsLoadedFromPack\@NpcI18nObserver\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void onLanguageKeywordsLoadedFromPack(class PackManifest const&);
    /**
     * @symbol ?onLanguagesLoaded\@NpcI18nObserver\@\@UEAAXXZ
     */
    MCVAPI void onLanguagesLoaded();
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_loadNpcData\@NpcI18nObserver\@\@AEAAXXZ
     */
    MCAPI void _loadNpcData();
    // NOLINTEND
};
