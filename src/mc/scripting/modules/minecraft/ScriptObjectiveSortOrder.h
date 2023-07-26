#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { enum class ScriptObjectiveSortOrderType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptObjectiveSortOrder {

public:
    // prevent constructor by default
    ScriptObjectiveSortOrder& operator=(ScriptObjectiveSortOrder const&) = delete;
    ScriptObjectiveSortOrder(ScriptObjectiveSortOrder const&)            = delete;
    ScriptObjectiveSortOrder()                                           = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptObjectiveSortOrder\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@W4ScriptObjectiveSortOrderType\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<
        enum class ScriptModuleMinecraft::ScriptObjectiveSortOrderType,
        enum class ScriptModuleMinecraft::ScriptObjectiveSortOrderType>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
