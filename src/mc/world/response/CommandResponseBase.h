#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/common/CommandOriginSystem.h"

class CommandResponseBase {
public:
    // prevent constructor by default
    CommandResponseBase& operator=(CommandResponseBase const&);
    CommandResponseBase(CommandResponseBase const&);
    CommandResponseBase();

public:
    // NOLINTBEGIN
    // symbol: ?_getCommandOriginSystem@CommandResponseBase@@MEBA?AW4CommandOriginSystem@@XZ
    MCVAPI ::CommandOriginSystem _getCommandOriginSystem() const;

    // symbol: ??1CommandResponseBase@@UEAA@XZ
    MCVAPI ~CommandResponseBase();

    // symbol: ?NameID@CommandResponseBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_addCommand@CommandResponseBase@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _addCommand(std::string const& entry);

    // symbol: ?_executeAction@CommandResponseBase@@IEBAXAEAVRenderParams@@@Z
    MCAPI void _executeAction(class RenderParams& params) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_compileCommands@CommandResponseBase@@AEBAXAEAVILevel@@@Z
    MCAPI void _compileCommands(class ILevel& level) const;

    // NOLINTEND
};
