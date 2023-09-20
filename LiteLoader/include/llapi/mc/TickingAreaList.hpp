/**
 * @file  TickingAreaList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TickingAreaListBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreaList.
 *
 */
class TickingAreaList : public TickingAreaListBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALIST
public:
    class TickingAreaList& operator=(class TickingAreaList const &) = delete;
    TickingAreaList(class TickingAreaList const &) = delete;
    TickingAreaList() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?removeDistantEntityAreasAndCheckForRemoved\@TickingAreaList\@\@UEAA_NAEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@V?$function\@$$A6AXAEBVITickingArea\@\@\@Z\@3\@AEAVLevelStorage\@\@\@Z
     */
    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const &, class std::function<void (class ITickingArea const &)>, class LevelStorage &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALIST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreaList();
#endif

};
