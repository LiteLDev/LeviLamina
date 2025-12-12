#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6e3899;
    ::ll::UntypedStorage<8, 24> mUnkda46d7;
    ::ll::UntypedStorage<8, 24> mUnkde0160;
    ::ll::UntypedStorage<4, 8>  mUnkff9dc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerRules& operator=(ScriptContainerRules const&);
    ScriptContainerRules(ScriptContainerRules const&);
    ScriptContainerRules();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::string> _getAllowedItems() const;

    MCNAPI ::std::vector<::std::string> _getBannedItems() const;

    MCNAPI ~ScriptContainerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
