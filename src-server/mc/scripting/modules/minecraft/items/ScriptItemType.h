#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk986387;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemType& operator=(ScriptItemType const&);
    ScriptItemType(ScriptItemType const&);
    ScriptItemType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getName() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
