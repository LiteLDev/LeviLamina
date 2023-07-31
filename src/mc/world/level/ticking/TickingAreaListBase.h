#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingAreaListBase {

public:
    // prevent constructor by default
    TickingAreaListBase& operator=(TickingAreaListBase const&) = delete;
    TickingAreaListBase(TickingAreaListBase const&)            = delete;
    TickingAreaListBase()                                      = delete;

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
     * ?removeDistantEntityAreasAndCheckForRemoved\@TickingAreaListBase\@\@UEAA_NAEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@V?$function\@$$A6AXAEBVITickingArea\@\@\@Z\@3\@AEAVLevelStorage\@\@\@Z
     */
    virtual bool
    removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const&, std::function<void(class ITickingArea const&)>, class LevelStorage&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALISTBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreaListBase();
#endif
    /**
     * @symbol
     * ?add\@TickingAreaListBase\@\@QEAAXV?$unique_ptr\@VITickingArea\@\@U?$default_delete\@VITickingArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class ITickingArea>);
    /**
     * @symbol ?countEntityTickingAreas\@TickingAreaListBase\@\@QEBAIXZ
     */
    MCAPI unsigned int countEntityTickingAreas() const;
    /**
     * @symbol ?destroyAreas\@TickingAreaListBase\@\@QEAAXXZ
     */
    MCAPI void destroyAreas();
    /**
     * @symbol
     * ?findStandaloneAreasContaining\@TickingAreaListBase\@\@QEAA?AV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasContaining(class BlockPos const&);
    /**
     * @symbol
     * ?findStandaloneAreasNamed\@TickingAreaListBase\@\@QEBA?AV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> findStandaloneAreasNamed(std::string const&) const;
    /**
     * @symbol
     * ?getAreaFor\@TickingAreaListBase\@\@QEBA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const&) const;
    /**
     * @symbol
     * ?getAreas\@TickingAreaListBase\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::shared_ptr<class ITickingArea>> const& getAreas() const;
    /**
     * @symbol
     * ?getStandaloneTickingAreaDescriptions\@TickingAreaListBase\@\@QEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;
    /**
     * @symbol
     * ?hasTickingAreaNamed\@TickingAreaListBase\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTickingAreaNamed(std::string const&) const;
    /**
     * @symbol ?processRemoves\@TickingAreaListBase\@\@QEAAXXZ
     */
    MCAPI void processRemoves();
    /**
     * @symbol
     * ?removeAllStandaloneAreas\@TickingAreaListBase\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removeAllStandaloneAreas(class LevelStorage&);
    /**
     * @symbol
     * ?removeAreas\@TickingAreaListBase\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@2\@\@3\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription>
          removeAreas(std::vector<std::shared_ptr<class ITickingArea>> const&, class LevelStorage&);
    /**
     * @symbol ?tickSeasons\@TickingAreaListBase\@\@QEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void tickSeasons(class Random&);
    /**
     * @symbol ?updateBlockSourceCurrentTick\@TickingAreaListBase\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void updateBlockSourceCurrentTick(struct Tick const&);
    // NOLINTEND
};
