#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/IScriptNetSerializer.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetStructureSerializer : public ::ScriptModuleMinecraftNet::IScriptNetSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk57dc82;
    ::ll::UntypedStorage<8, 8>  mUnkcb050b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetStructureSerializer& operator=(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getContentType() const /*override*/;

    virtual ::std::optional<::std::string>
    serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable) /*override*/;

    virtual ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    deserialize(
        ::std::string const&            body,
        ::std::string const&            identifier,
        ::Scripting::WeakLifetimeScope& scope
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getContentType() const;

    MCNAPI ::std::optional<::std::string> $serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    $deserialize(::std::string const& body, ::std::string const& identifier, ::Scripting::WeakLifetimeScope& scope);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
