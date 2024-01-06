#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandResponseBase {
public:
    // prevent constructor by default
    CommandResponseBase& operator=(CommandResponseBase const&);
    CommandResponseBase(CommandResponseBase const&);
    CommandResponseBase();

public:
    // NOLINTBEGIN
    // symbol: ??1CommandResponseBase@@QEAA@XZ
    MCAPI ~CommandResponseBase();

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
