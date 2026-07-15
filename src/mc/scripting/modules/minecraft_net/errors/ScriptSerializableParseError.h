#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptSerializableParseError : public ::Scripting::BaseError {
public:
    // ScriptSerializableParseError inner types define
    enum class Reason : int {
        EmptyBody               = 0,
        InvalidContentType      = 1,
        InvalidIdentifier       = 2,
        IdentifierAlreadyExists = 3,
        InvalidData             = 4,
        SerializationFailed     = 5,
        DeserializationFailed   = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfe45a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSerializableParseError& operator=(ScriptSerializableParseError const&);
    ScriptSerializableParseError(ScriptSerializableParseError const&);
    ScriptSerializableParseError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
