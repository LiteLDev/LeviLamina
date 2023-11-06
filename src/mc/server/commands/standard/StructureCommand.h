#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StructureCommand : public ::Command {
public:
    // prevent constructor by default
    StructureCommand& operator=(StructureCommand const&);
    StructureCommand(StructureCommand const&);
    StructureCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StructureCommand();

    // vIndex: 2, symbol: ?execute@StructureCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@StructureCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_delete@StructureCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _delete(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?_getFullName@StructureCommand@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _getFullName() const;

    // symbol: ?_isValidSize@StructureCommand@@AEBA_NAEBVBlockPos@@AEBVDimensionHeightRange@@AEAVCommandOutput@@@Z
    MCAPI bool _isValidSize(class BlockPos const&, class DimensionHeightRange const&, class CommandOutput&) const;

    // symbol: ?_load@StructureCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _load(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?_save@StructureCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _save(class CommandOrigin const&, class CommandOutput&) const;

    // NOLINTEND
};
