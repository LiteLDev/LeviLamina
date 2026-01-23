#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IBreakpointValidator.h"

class ScriptBreakpointValidator : public ::Scripting::IBreakpointValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka66c41;
    ::ll::UntypedStorage<8, 24> mUnk61ce14;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBreakpointValidator& operator=(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBreakpointValidator() /*override*/ = default;

    virtual bool validatePath(::std::string_view sourcePath) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $validatePath(::std::string_view sourcePath);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
