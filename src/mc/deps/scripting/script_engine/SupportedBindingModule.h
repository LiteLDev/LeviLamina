#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct SupportedBindingModule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkd2fac2;
    ::ll::UntypedStorage<8, 24>  mUnk516cf6;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedBindingModule& operator=(SupportedBindingModule const&);
    SupportedBindingModule(SupportedBindingModule const&);
    SupportedBindingModule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SupportedBindingModule();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
