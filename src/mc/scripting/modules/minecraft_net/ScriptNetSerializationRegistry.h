#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { class IScriptNetSerializer; }
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string normalizeContentType(::std::string const& contentType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
