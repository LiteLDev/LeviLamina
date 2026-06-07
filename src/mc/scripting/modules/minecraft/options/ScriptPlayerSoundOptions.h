#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mLocation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerSoundOptions(::ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);

    MCAPI float getPitch() const;

    MCAPI float getVolume() const;

    MCAPI ::std::optional<::Scripting::Error> validate() const;
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
