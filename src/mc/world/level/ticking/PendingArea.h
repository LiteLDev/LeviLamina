#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PendingArea {

public:
    // prevent constructor by default
    PendingArea& operator=(PendingArea const&) = delete;
    PendingArea(PendingArea const&)            = delete;
    PendingArea()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getDescription\@PendingArea\@\@QEBA?AUTickingAreaDescription\@\@XZ
     */
    MCAPI struct TickingAreaDescription getDescription() const;
    /**
     * @symbol ?isEntityOwned\@PendingArea\@\@QEBA_NXZ
     */
    MCAPI bool isEntityOwned() const;
    /**
     * @symbol ??4PendingArea\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PendingArea& operator=(struct PendingArea&&);
    /**
     * @symbol ?serialize\@PendingArea\@\@QEBA?AVCompoundTag\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class CompoundTag serialize(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ??1PendingArea\@\@QEAA\@XZ
     */
    MCAPI ~PendingArea();
    /**
     * @symbol ?createEntityTickingArea\@PendingArea\@\@SA?AU1\@VUUID\@mce\@\@UActorUniqueID\@\@AEBUBounds\@\@_NM\@Z
     */
    MCAPI static struct PendingArea
    createEntityTickingArea(class mce::UUID, struct ActorUniqueID, struct Bounds const&, bool, float);
    /**
     * @symbol
     * ?createTickingArea\@PendingArea\@\@SA?AU1\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUBounds\@\@_NW4TickingAreaLoadMode\@\@\@Z
     */
    MCAPI static struct PendingArea
    createTickingArea(class mce::UUID, std::string const&, struct Bounds const&, bool, enum class TickingAreaLoadMode);
    /**
     * @symbol
     * ?load\@PendingArea\@\@SA?AU1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct PendingArea load(std::string const&, class CompoundTag const&);
    /**
     * @symbol ?validTag\@PendingArea\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool validTag(class CompoundTag const&);
    // NOLINTEND
};
