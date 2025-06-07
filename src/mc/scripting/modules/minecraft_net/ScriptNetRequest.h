#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Method; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequest : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptNetRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc85689;
    ::ll::UntypedStorage<8, 24> mUnkb5ef2f;
    ::ll::UntypedStorage<8, 32> mUnkf73a25;
    ::ll::UntypedStorage<4, 4>  mUnk807e94;
    ::ll::UntypedStorage<1, 2>  mUnke5dba2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetRequest& operator=(ScriptNetRequest const&);
    ScriptNetRequest(ScriptNetRequest const&);
    ScriptNetRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> addHeader(
        ::std::string const&                                                                key,
        ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> const& value
    );

    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetRequest& operator=(::ScriptModuleMinecraftNet::ScriptNetRequest&&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest>
    setBody(::std::string const& body);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest>
    setHeaders(::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const& headers);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest>
    setMethod(::Bedrock::Http::Method method);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> setTimeout(uint timeout);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
