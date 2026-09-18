#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetContentEncoding.h"

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

    virtual ::std::optional<::ScriptModuleMinecraftNet::ScriptNetContentEncoding> getContentEncoding() const;

    virtual ::std::optional<::std::string>
    serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable) = 0;

    virtual ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    deserialize(::std::string const& body, ::std::string const& identifier, ::Scripting::WeakLifetimeScope& scope) = 0;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
