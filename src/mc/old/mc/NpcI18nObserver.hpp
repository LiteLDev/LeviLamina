/**
 * @file  NpcI18nObserver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcI18nObserver.
 *
 */
class NpcI18nObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCI18NOBSERVER
public:
    class NpcI18nObserver& operator=(class NpcI18nObserver const &) = delete;
    NpcI18nObserver(class NpcI18nObserver const &) = delete;
    NpcI18nObserver() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NpcI18nObserver();
    /**
     * @vftbl  1
     * @symbol  ?onLanguageChanged\@NpcI18nObserver\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void onLanguageChanged(std::string const &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCI18NOBSERVER
    /**
     * @symbol  ?onLanguageKeywordsLoadedFromPack\@NpcI18nObserver\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void onLanguageKeywordsLoadedFromPack(class PackManifest const &);
    /**
     * @symbol  ?onLanguagesLoaded\@NpcI18nObserver\@\@UEAAXXZ
     */
    MCVAPI void onLanguagesLoaded();
#endif

//private:
    /**
     * @symbol  ?_loadNpcData\@NpcI18nObserver\@\@AEAAXXZ
     */
    MCAPI void _loadNpcData();

private:

};