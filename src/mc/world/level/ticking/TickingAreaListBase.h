#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingAreaListBase {

public:
    // prevent constructor by default
    TickingAreaListBase& operator=(TickingAreaListBase const&) = delete;
    TickingAreaListBase(TickingAreaListBase const&)            = delete;
    TickingAreaListBase()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?removeDistantEntityAreasAndCheckForRemoved\@TickingAreaListBase\@\@UEAA_NAEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@V?$function\@$$A6AXAEBVITickingArea\@\@\@Z\@3\@AEAVLevelStorage\@\@\@Z
     */
    virtual bool
    removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const&, class std::function<void(class ITickingArea const&)>, class LevelStorage&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALISTBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreaListBase(); // NOLINT
#endif
    /**
     * @symbol
     * ?add\@TickingAreaListBase\@\@QEAAXV?$unique_ptr\@VITickingArea\@\@U?$default_delete\@VITickingArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class ITickingArea>); // NOLINT
    /**
     * @symbol ?countEntityTickingAreas\@TickingAreaListBase\@\@QEBAIXZ
     */
    MCAPI unsigned int countEntityTickingAreas() const; // NOLINT
    /**
     * @symbol ?destroyAreas\@TickingAreaListBase\@\@QEAAXXZ
     */
    MCAPI void destroyAreas(); // NOLINT
    /**
     * @symbol
     * ?findStandaloneAreasContaining\@TickingAreaListBase\@\@QEAA?AV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>>
          findStandaloneAreasContaining(class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?findStandaloneAreasNamed\@TickingAreaListBase\@\@QEBA?AV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>>
          findStandaloneAreasNamed(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getAreaFor\@TickingAreaListBase\@\@QEBA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const&) const; // NOLINT
    /**
     * @symbol
     * ?getAreas\@TickingAreaListBase\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> const& getAreas() const; // NOLINT
    /**
     * @symbol
     * ?getStandaloneTickingAreaDescriptions\@TickingAreaListBase\@\@QEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TickingAreaDescription> getStandaloneTickingAreaDescriptions() const; // NOLINT
    /**
     * @symbol
     * ?hasTickingAreaNamed\@TickingAreaListBase\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTickingAreaNamed(std::string const&) const; // NOLINT
    /**
     * @symbol ?processRemoves\@TickingAreaListBase\@\@QEAAXXZ
     */
    MCAPI void processRemoves(); // NOLINT
    /**
     * @symbol
     * ?removeAllStandaloneAreas\@TickingAreaListBase\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removeAllStandaloneAreas(class LevelStorage&); // NOLINT
    /**
     * @symbol
     * ?removeAreas\@TickingAreaListBase\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@3\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription>
          removeAreas(std::vector<class std::shared_ptr<class ITickingArea>> const&, class LevelStorage&); // NOLINT
    /**
     * @symbol ?tickSeasons\@TickingAreaListBase\@\@QEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void tickSeasons(class Random&); // NOLINT
    /**
     * @symbol ?updateBlockSourceCurrentTick\@TickingAreaListBase\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void updateBlockSourceCurrentTick(struct Tick const&); // NOLINT
};
