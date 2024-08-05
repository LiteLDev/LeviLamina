#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftServerAdmin { class ScriptSecretString; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequest {
public:
    // prevent constructor by default
    ScriptNetRequest& operator=(ScriptNetRequest const&);
    ScriptNetRequest();

public:
    // NOLINTBEGIN
    MCAPI ScriptNetRequest(struct ScriptModuleMinecraftNet::ScriptNetRequest&&);

    MCAPI ScriptNetRequest(struct ScriptModuleMinecraftNet::ScriptNetRequest const&);

    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> addHeader(
        std::string const&                                                                           key,
        std::variant<std::string, class ScriptModuleMinecraftServerAdmin::ScriptSecretString> const& value
    );

    MCAPI struct ScriptModuleMinecraftNet::ScriptNetRequest&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetRequest&&);

    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setBody(std::string const& body);

    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setHeaders(std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const& headers);

    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setMethod(class Bedrock::Http::Method method);

    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setTimeout(uint timeout);

    MCAPI ~ScriptNetRequest();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetRequest> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
