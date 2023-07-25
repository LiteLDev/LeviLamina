#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetRequestMethod {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTNET_SCRIPTNETREQUESTMETHOD
public:
    ScriptNetRequestMethod& operator=(ScriptNetRequestMethod const&) = delete;
    ScriptNetRequestMethod(ScriptNetRequestMethod const&)            = delete;
    ScriptNetRequestMethod()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptNetRequestMethod\@ScriptModuleMinecraftNet\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VMethod\@Http\@Bedrock\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, class Bedrock::Http::Method> bind();
};

}; // namespace ScriptModuleMinecraftNet
