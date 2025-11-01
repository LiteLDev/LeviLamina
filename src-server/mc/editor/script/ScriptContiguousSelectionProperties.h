#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptContiguousSelectionProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8e94fe;
    ::ll::UntypedStorage<4, 8> mUnkb3d3c7;
    ::ll::UntypedStorage<4, 16> mUnk8ec308;
    ::ll::UntypedStorage<1, 2> mUnk9cdbf1;
    ::ll::UntypedStorage<4, 8> mUnk52fbe9;
    ::ll::UntypedStorage<1, 2> mUnkbd0796;
    ::ll::UntypedStorage<4, 8> mUnk343a43;
    ::ll::UntypedStorage<8, 32> mUnk3376ac;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContiguousSelectionProperties(ScriptContiguousSelectionProperties const&);
    ScriptContiguousSelectionProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptContiguousSelectionProperties& operator=(::Editor::ScriptModule::ScriptContiguousSelectionProperties&&);

    MCNAPI ::Editor::ScriptModule::ScriptContiguousSelectionProperties& operator=(::Editor::ScriptModule::ScriptContiguousSelectionProperties const&);

    MCNAPI ~ScriptContiguousSelectionProperties();
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

}
