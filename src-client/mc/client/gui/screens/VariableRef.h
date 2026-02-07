#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct LayoutComponent;
// clang-format on

class VariableRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                         mUnsafePointer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mControl;
    ::ll::TypedStorage<8, 8, ::LayoutComponent*>            mLayoutComponent;
    ::ll::TypedStorage<1, 1, ::LayoutVariableType>          mType;
    // NOLINTEND

public:
    // prevent constructor by default
    VariableRef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VariableRef(::std::weak_ptr<::UIControl> control, ::LayoutVariableType type);

    MCAPI ~VariableRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::UIControl> control, ::LayoutVariableType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
