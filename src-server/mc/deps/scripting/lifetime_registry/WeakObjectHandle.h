#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class WeakObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7db6bc;
    ::ll::UntypedStorage<8, 16> mUnkb898e0;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakObjectHandle& operator=(WeakObjectHandle const&);
    WeakObjectHandle(WeakObjectHandle const&);
    WeakObjectHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool valid() const;
    // NOLINTEND

};

}
