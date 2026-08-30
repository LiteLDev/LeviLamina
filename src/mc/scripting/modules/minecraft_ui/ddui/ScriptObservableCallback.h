#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8e4645;
    ::ll::UntypedStorage<8, 16> mUnk176906;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObservableCallback& operator=(ScriptObservableCallback const&);
    ScriptObservableCallback(ScriptObservableCallback const&);
    ScriptObservableCallback();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptObservableCallback(
        ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>> callback,
        ::Scripting::WeakLifetimeScope&                                       scope
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>> callback,
        ::Scripting::WeakLifetimeScope&                                       scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
