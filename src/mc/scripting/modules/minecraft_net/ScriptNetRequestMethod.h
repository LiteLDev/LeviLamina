#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetRequestMethod {
public:
    // prevent constructor by default
    ScriptNetRequestMethod& operator=(ScriptNetRequestMethod const&);
    ScriptNetRequestMethod(ScriptNetRequestMethod const&);
    ScriptNetRequestMethod();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, class Bedrock::Http::Method> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
