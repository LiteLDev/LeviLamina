#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabErrorStringInvalidLength : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkabf06c;
    ::ll::UntypedStorage<4, 4>  mUnkbf01fe;
    ::ll::UntypedStorage<4, 4>  mUnkfdb564;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabErrorStringInvalidLength& operator=(ScriptPrefabErrorStringInvalidLength const&);
    ScriptPrefabErrorStringInvalidLength(ScriptPrefabErrorStringInvalidLength const&);
    ScriptPrefabErrorStringInvalidLength();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabErrorStringInvalidLength(::std::string const& s, int len, int maxLen);

    MCNAPI ~ScriptPrefabErrorStringInvalidLength();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& s, int len, int maxLen);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
