#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct SpeedProps; }
namespace cereal { struct ReflectionCtx; }
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
    MCAPI explicit Speed(::std::function<void(::Editor::Settings::SpeedProps const&)> callback);

    MCFOLD float getFlySpeedMultiplier() const;

    MCAPI void setFlySpeedMultiplier(float newSpeed);

    MCAPI void updateSettings(::Editor::Settings::SpeedProps const& props, bool notifyUpdate);

    MCAPI ~Speed();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<void(::Editor::Settings::SpeedProps const&)> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
