#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkdbc387;
    ::ll::UntypedStorage<4, 8>  mUnka3a93a;
    ::ll::UntypedStorage<4, 8>  mUnkfc4ebf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundOptions& operator=(ScriptSoundOptions const&);
    ScriptSoundOptions(ScriptSoundOptions const&);
    ScriptSoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 getLocation() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptSoundOptions> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
