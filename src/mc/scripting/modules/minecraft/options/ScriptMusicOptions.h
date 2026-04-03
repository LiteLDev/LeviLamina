#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mFade;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>  mLoop;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::PropertyOutOfBoundsError> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
