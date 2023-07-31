#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentTierManager {

public:
    // prevent constructor by default
    ContentTierManager& operator=(ContentTierManager const&) = delete;
    ContentTierManager(ContentTierManager const&)            = delete;
    ContentTierManager()                                     = delete;

public:
    // NOLINTBEGIN
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
    MCAPI ContentTierManager(std::function<bool(void)>);
    // NOLINTEND
};
