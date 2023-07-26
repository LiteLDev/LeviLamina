#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingAreaList {

public:
    // prevent constructor by default
    TickingAreaList& operator=(TickingAreaList const&) = delete;
    TickingAreaList(TickingAreaList const&)            = delete;
    TickingAreaList()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?removeDistantEntityAreasAndCheckForRemoved\@TickingAreaList\@\@UEAA_NAEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@V?$function\@$$A6AXAEBVITickingArea\@\@\@Z\@3\@AEAVLevelStorage\@\@\@Z
     */
    virtual bool
    removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const&, class std::function<void(class ITickingArea const&)>, class LevelStorage&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALIST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreaList(); // NOLINT
#endif
};
