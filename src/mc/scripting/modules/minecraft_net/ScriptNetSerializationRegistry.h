#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { class IScriptNetSerializer; }
namespace ScriptModuleMinecraftNet { struct ScriptNetSerializeResult; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetSerializationRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdf5474;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetSerializationRegistry& operator=(ScriptNetSerializationRegistry const&);
    ScriptNetSerializationRegistry(ScriptNetSerializationRegistry const&);
    ScriptNetSerializationRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerSerializer(::std::unique_ptr<::ScriptModuleMinecraftNet::IScriptNetSerializer> serializer);

    MCNAPI ::std::optional<::ScriptModuleMinecraftNet::ScriptNetSerializeResult>
    serialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable> const& handle) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string normalizeContentType(::std::string const& contentType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
