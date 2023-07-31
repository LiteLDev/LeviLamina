#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class SignTextSide;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSignTextSide {

public:
    // prevent constructor by default
    ScriptSignTextSide& operator=(ScriptSignTextSide const&) = delete;
    ScriptSignTextSide(ScriptSignTextSide const&)            = delete;
    ScriptSignTextSide()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptSignTextSide\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4SignTextSide\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class SignTextSide> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
