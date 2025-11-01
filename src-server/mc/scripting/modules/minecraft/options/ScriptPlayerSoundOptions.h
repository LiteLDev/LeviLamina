#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk3c9ff5;
    ::ll::UntypedStorage<4, 8> mUnk897870;
    ::ll::UntypedStorage<4, 8> mUnkf67b7f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSoundOptions& operator=(ScriptPlayerSoundOptions const&);
    ScriptPlayerSoundOptions(ScriptPlayerSoundOptions const&);
    ScriptPlayerSoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}
