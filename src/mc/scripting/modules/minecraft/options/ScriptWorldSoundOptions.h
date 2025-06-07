#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd3ea43;
    ::ll::UntypedStorage<4, 8> mUnk816ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldSoundOptions& operator=(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions();

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

} // namespace ScriptModuleMinecraft
