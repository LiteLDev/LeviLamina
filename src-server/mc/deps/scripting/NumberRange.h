#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Scripting {

struct NumberRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk679927;
    ::ll::UntypedStorage<4, 4> mUnk4db122;
    // NOLINTEND

public:
    // prevent constructor by default
    NumberRange& operator=(NumberRange const&);
    NumberRange(NumberRange const&);
    NumberRange();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}
