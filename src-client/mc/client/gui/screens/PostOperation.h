#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
struct LayoutComponent;
// clang-format on

struct PostOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LayoutComponent*>        mLayout;
    ::ll::TypedStorage<8, 40, ::VariableRef>            mVariableRef;
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mOperation;
    ::ll::TypedStorage<4, 4, float>                     postOpValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PostOperation& operator=(PostOperation const&);
    PostOperation(PostOperation const&);
    PostOperation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PostOperation(::PostOperation&&);

    MCAPI ~PostOperation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PostOperation&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
