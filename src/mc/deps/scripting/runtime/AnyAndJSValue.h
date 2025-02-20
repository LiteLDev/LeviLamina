#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct AnyAndJSValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk4b7841;
    ::ll::UntypedStorage<8, 24>  mUnk98c9ab;
    ::ll::UntypedStorage<8, 8>   mUnkaff2a7;
    // NOLINTEND

public:
    // prevent constructor by default
    AnyAndJSValue& operator=(AnyAndJSValue const&);
    AnyAndJSValue(AnyAndJSValue const&);
    AnyAndJSValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AnyAndJSValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
