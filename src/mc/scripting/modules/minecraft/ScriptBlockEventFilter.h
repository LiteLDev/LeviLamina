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
    MCAPI ScriptBlockEventFilter(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCAPI ScriptBlockEventFilter(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCAPI struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI void process();

    MCAPI bool shouldAllow(struct ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const&);

    MCAPI ~ScriptBlockEventFilter();

    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft::EventFilters
