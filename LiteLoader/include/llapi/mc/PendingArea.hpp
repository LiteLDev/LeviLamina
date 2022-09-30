/**
 * @file  PendingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PendingArea.
 *
 */
struct PendingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PENDINGAREA
public:
    struct PendingArea& operator=(struct PendingArea const &) = delete;
    PendingArea(struct PendingArea const &) = delete;
    PendingArea() = delete;
#endif

public:
    /**
     * @hash   379764628
     * @symbol ?getDescription@PendingArea@@QEBA?AUTickingAreaDescription@@XZ
     */
    MCAPI struct TickingAreaDescription getDescription() const;
    /**
     * @hash   1536945190
     * @symbol ?isEntityOwned@PendingArea@@QEBA_NXZ
     */
    MCAPI bool isEntityOwned() const;
    /**
     * @hash   481505656
     * @symbol ??4PendingArea@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct PendingArea & operator=(struct PendingArea &&);
    /**
     * @hash   -903902985
     * @symbol ?serialize@PendingArea@@QEBA?AVCompoundTag@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI class CompoundTag serialize(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   1762834496
     * @symbol ??1PendingArea@@QEAA@XZ
     */
    MCAPI ~PendingArea();
    /**
     * @hash   1532094070
     * @symbol ?createEntityTickingArea@PendingArea@@SA?AU1@VUUID@mce@@UActorUniqueID@@AEBUBounds@@_NM@Z
     */
    MCAPI static struct PendingArea createEntityTickingArea(class mce::UUID, struct ActorUniqueID, struct Bounds const &, bool, float);
    /**
     * @hash   -601478512
     * @symbol ?createTickingArea@PendingArea@@SA?AU1@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUBounds@@_NW4TickingAreaLoadMode@@@Z
     */
    MCAPI static struct PendingArea createTickingArea(class mce::UUID, std::string const &, struct Bounds const &, bool, enum class TickingAreaLoadMode);
    /**
     * @hash   -1693877831
     * @symbol ?load@PendingArea@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     */
    MCAPI static struct PendingArea load(std::string const &, class CompoundTag const &);
    /**
     * @hash   1446747737
     * @symbol ?validTag@PendingArea@@SA_NAEBVCompoundTag@@@Z
     */
    MCAPI static bool validTag(class CompoundTag const &);

};