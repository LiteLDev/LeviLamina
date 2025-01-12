#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Method; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequestMethod {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Bedrock::Http::Method> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
