#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptLeasedAnnotationInstance
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptLeasedAnnotationInstance> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8f6df5;
    ::ll::UntypedStorage<8, 16> mUnk6dc2c7;
    ::ll::UntypedStorage<8, 8>  mUnk67eb4e;
    ::ll::UntypedStorage<8, 32> mUnk4de2a8;
    ::ll::UntypedStorage<1, 1>  mUnkc975f4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeasedAnnotationInstance& operator=(ScriptLeasedAnnotationInstance const&);
    ScriptLeasedAnnotationInstance(ScriptLeasedAnnotationInstance const&);
    ScriptLeasedAnnotationInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptLeasedAnnotationInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
