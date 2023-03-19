/**
 * @file  ContentTierManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentTierManager.
 *
 */
class ContentTierManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTTIERMANAGER
public:
    class ContentTierManager& operator=(class ContentTierManager const &) = delete;
    ContentTierManager(class ContentTierManager const &) = delete;
    ContentTierManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getContentTierInfo\@ContentTierManager\@\@UEBA?AVContentTierInfo\@\@XZ
     */
    virtual class ContentTierInfo getContentTierInfo() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTTIERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContentTierManager();
#endif
    /**
     * @symbol ??0ContentTierManager\@\@QEAA\@V?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI ContentTierManager(class std::function<bool (void)>);

};
