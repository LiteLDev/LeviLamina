#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptQuickExtrudeProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk3da723;
    ::ll::UntypedStorage<4, 8>  mUnk634a6a;
    ::ll::UntypedStorage<4, 16> mUnk3e89bd;
    ::ll::UntypedStorage<1, 2>  mUnk890042;
    ::ll::UntypedStorage<1, 2>  mUnk1dd814;
    ::ll::UntypedStorage<4, 8>  mUnk20eff2;
    ::ll::UntypedStorage<4, 8>  mUnkda9405;
    ::ll::UntypedStorage<8, 32> mUnk162e57;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptQuickExtrudeProperties(ScriptQuickExtrudeProperties const&);
    ScriptQuickExtrudeProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptQuickExtrudeProperties&
    operator=(::Editor::ScriptModule::ScriptQuickExtrudeProperties const&);

    MCNAPI ::Editor::ScriptModule::ScriptQuickExtrudeProperties&
    operator=(::Editor::ScriptModule::ScriptQuickExtrudeProperties&&);

    MCNAPI ~ScriptQuickExtrudeProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
