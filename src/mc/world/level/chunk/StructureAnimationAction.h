#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/chunk/IRequestAction.h"

class StructureAnimationAction : public ::IRequestAction {
public:
    // prevent constructor by default
    StructureAnimationAction& operator=(StructureAnimationAction const&);
    StructureAnimationAction(StructureAnimationAction const&);
    StructureAnimationAction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructureAnimationAction@@UEAA@XZ
    virtual ~StructureAnimationAction() = default;

    // vIndex: 1, symbol: ?execute@StructureAnimationAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel&, class Dimension&);

    // vIndex: 2, symbol: ?serialize@StructureAnimationAction@@UEAAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&);

    // vIndex: 3, symbol: ??8StructureAnimationAction@@UEBA_NAEBVIRequestAction@@@Z
    virtual bool operator==(class IRequestAction const&) const;

    // symbol:
    // ??0StructureAnimationAction@@QEAA@V?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, DimensionType);

    // symbol:
    // ??0StructureAnimationAction@@QEAA@AEBVStructureSettings@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    StructureAnimationAction(class StructureSettings const&, DimensionType, class BlockPos const&, std::string const&);

    // symbol:
    // ?load@StructureAnimationAction@@SA?AV?$unique_ptr@VStructureAnimationAction@@U?$default_delete@VStructureAnimationAction@@@std@@@std@@AEBVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const&, std::string const&);

    // NOLINTEND
};
