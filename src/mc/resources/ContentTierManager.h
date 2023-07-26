#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentTierManager {

public:
    // prevent constructor by default
    ContentTierManager& operator=(ContentTierManager const&) = delete;
    ContentTierManager(ContentTierManager const&)            = delete;
    ContentTierManager()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getContentTierInfo\@ContentTierManager\@\@UEBA?AVContentTierInfo\@\@XZ
     */
    virtual class ContentTierInfo getContentTierInfo() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTTIERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContentTierManager(); // NOLINT
#endif
    /**
     * @symbol ??0ContentTierManager\@\@QEAA\@V?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI ContentTierManager(class std::function<bool(void)>); // NOLINT
};
