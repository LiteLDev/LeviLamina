#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct SpeedProps; }
// clang-format on

namespace Editor::Settings {

class Speed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk572404;
    ::ll::UntypedStorage<4, 4>  mUnk304867;
    // NOLINTEND

public:
    // prevent constructor by default
    Speed& operator=(Speed const&);
    Speed(Speed const&);
    Speed();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Speed(::std::function<void(::Editor::Settings::SpeedProps const&)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<void(::Editor::Settings::SpeedProps const&)> callback);
    // NOLINTEND
};

} // namespace Editor::Settings
