#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldSoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptWorldSoundOptions(::ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);

    MCAPI float getPitch() const;

    MCFOLD float getVolume() const;

    MCAPI ::std::optional<::Scripting::PropertyOutOfBoundsError> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
