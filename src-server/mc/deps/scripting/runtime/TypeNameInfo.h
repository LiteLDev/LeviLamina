#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBindingName;
    ::ll::TypedStorage<8, 32, ::std::string> mTypeName;
    ::ll::TypedStorage<1, 1, bool>           mIsBound;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeNameInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TypeNameInfo(::std::string bindingName, ::std::string typeName, bool bound);

    MCAPI ~TypeNameInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string bindingName, ::std::string typeName, bool bound);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
