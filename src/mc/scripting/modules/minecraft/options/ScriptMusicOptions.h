#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc5fc5e;
    ::ll::UntypedStorage<4, 8> mUnk1a0684;
    ::ll::UntypedStorage<1, 2> mUnk8a9f22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMusicOptions& operator=(ScriptMusicOptions const&);
    ScriptMusicOptions(ScriptMusicOptions const&);
    ScriptMusicOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& FADE_DEFAULT();

    MCNAPI static float const& FADE_MIN();

    MCNAPI static bool const& LOOP_DEFAULT();

    MCNAPI static float const& VOLUME_DEFAULT();

    MCNAPI static float const& VOLUME_MIN();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
