#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume {

public:
    // prevent constructor by default
    ScriptSimpleBlockVolume& operator=(ScriptSimpleBlockVolume const&) = delete;
    ScriptSimpleBlockVolume(ScriptSimpleBlockVolume const&)            = delete;
    ScriptSimpleBlockVolume()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptSimpleBlockVolume\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VSimpleBlockVolume\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class SimpleBlockVolume> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
