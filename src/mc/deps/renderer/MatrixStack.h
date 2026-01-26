#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on

class MatrixStack {
public:
    // MatrixStack inner types declare
    // clang-format off
    struct MatrixStackRef;
    // clang-format on

    // MatrixStack inner types define
    struct MatrixStackRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::MatrixStack*> stack;
        ::ll::TypedStorage<8, 8, ::Matrix*>      mat;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::Matrix>>  stack;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> sortOrigin;
    ::ll::TypedStorage<1, 1, bool>                     _isDirty;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::Matrix& _pushIdentity();

    MCAPI_C ::Matrix& getTop();

    MCAPI_C ::MatrixStack::MatrixStackRef push(bool isSortOrigin);

    MCAPI_C ::Matrix const& sortOriginTransform() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
