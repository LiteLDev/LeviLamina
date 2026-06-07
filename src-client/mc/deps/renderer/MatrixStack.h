#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

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
        MCFOLD ::Matrix& operator*();

        MCFOLD ::Matrix* operator->();

        MCAPI ::MatrixStack::MatrixStackRef& operator=(::Matrix const& lhs);

        MCFOLD void release();

        MCAPI ~MatrixStackRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    MCAPI MatrixStack();

    MCAPI ::Matrix& getTop();

    MCAPI bool isSortOriginTop() const;

    MCAPI ::MatrixStack::MatrixStackRef push(bool isSortOrigin);

    MCAPI ::MatrixStack::MatrixStackRef push(::Matrix const& matrix, bool isSortOrigin);

    MCAPI ::MatrixStack::MatrixStackRef pushIdentity(bool isSortOrigin);

    MCAPI ::Matrix const& sortOriginTransform() const;

    MCAPI ::Matrix const& top() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
