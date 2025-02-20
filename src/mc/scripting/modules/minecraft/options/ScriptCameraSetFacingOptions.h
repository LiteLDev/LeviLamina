#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetFacingOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc207d1;
    ::ll::UntypedStorage<4, 16> mUnk7caf74;
    ::ll::UntypedStorage<4, 20> mUnk17dd55;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraSetFacingOptions& operator=(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetFacingOptions const& other) const;

    MCAPI ~ScriptCameraSetFacingOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraSetFacingOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
