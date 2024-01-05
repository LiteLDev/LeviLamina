#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class Goal {
public:
    // prevent constructor by default
    Goal& operator=(Goal const&);
    Goal(Goal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Goal@@UEAA@XZ
    virtual ~Goal();

    // vIndex: 1, symbol: ?canUse@AdmireItemGoal@@UEAA_NXZ
    virtual bool canUse() = 0;

    // vIndex: 2, symbol: ?canContinueToUse@Goal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@Goal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@Goal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@Goal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@Goal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@AdmireItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const = 0;

    // vIndex: 8, symbol: ?isTargetGoal@Goal@@UEBA_NXZ
    virtual bool isTargetGoal() const;

    // vIndex: 9, symbol: ?onPlayerDimensionChanged@Goal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    virtual void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    // symbol: ??0Goal@@QEAA@XZ
    MCAPI Goal();

    // symbol: ?getRequiredControlFlags@Goal@@QEBAHXZ
    MCAPI int getRequiredControlFlags() const;

    // symbol: ?getTypeId@Goal@@QEBAGXZ
    MCAPI ushort getTypeId() const;

    // symbol: ?setRequiredControlFlags@Goal@@QEAAXH@Z
    MCAPI void setRequiredControlFlags(int requiredControlFlags);

    // symbol: ?setTypeId@Goal@@QEAAXG@Z
    MCAPI void setTypeId(ushort typeId);

    // NOLINTEND
};
