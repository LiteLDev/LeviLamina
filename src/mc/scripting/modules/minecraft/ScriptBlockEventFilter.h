#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockEventFilter {
public:
    // prevent constructor by default
    ScriptBlockEventFilter();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAA@$$QEAU012@@Z
    MCAPI ScriptBlockEventFilter(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    // symbol: ??0ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAA@AEBU012@@Z
    MCAPI ScriptBlockEventFilter(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    // symbol: ??4ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    // symbol: ??4ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    // symbol: ?process@ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void process();

    // symbol:
    // ?shouldAllow@ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAA_NAEBUScriptBlockFilterData@23@@Z
    MCAPI bool shouldAllow(struct ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const&);

    // symbol: ??1ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockEventFilter();

    // symbol:
    // ?bind@ScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptBlockEventFilter@EventFilters@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft::EventFilters
