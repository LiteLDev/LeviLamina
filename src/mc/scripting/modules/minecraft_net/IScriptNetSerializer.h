#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class IScriptNetSerializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptNetSerializer() = default;

    virtual ::std::string const& getContentType() const = 0;

    virtual ::std::optional<::std::string>
    serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable) = 0;

    virtual ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    deserialize(::std::string const& body, ::std::string const& identifier, ::Scripting::WeakLifetimeScope& scope) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
