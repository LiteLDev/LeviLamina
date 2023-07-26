#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { enum class ScriptActorLifetimeState; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorLifetimeStateBinding {

public:
    // prevent constructor by default
    ScriptActorLifetimeStateBinding& operator=(ScriptActorLifetimeStateBinding const&) = delete;
    ScriptActorLifetimeStateBinding(ScriptActorLifetimeStateBinding const&)            = delete;
    ScriptActorLifetimeStateBinding()                                                  = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptActorLifetimeStateBinding\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptActorLifetimeState\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptActorLifetimeState>
        bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
