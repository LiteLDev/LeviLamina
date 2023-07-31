#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class ItemColor;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDyeColor {

public:
    // prevent constructor by default
    ScriptDyeColor& operator=(ScriptDyeColor const&) = delete;
    ScriptDyeColor(ScriptDyeColor const&)            = delete;
    ScriptDyeColor()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptDyeColor\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemColor\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class ItemColor> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
