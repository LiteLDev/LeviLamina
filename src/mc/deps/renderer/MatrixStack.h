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
#ifdef LL_PLAT_C
        MCAPI ::MatrixStack::MatrixStackRef& operator=(::Matrix const& lhs);

        MCAPI ~MatrixStackRef();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
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
#ifdef LL_PLAT_C
    MCAPI ::Matrix& _pushIdentity();

    MCAPI ::Matrix& getTop();

    MCAPI ::MatrixStack::MatrixStackRef push(bool isSortOrigin);

    MCAPI ::Matrix const& sortOriginTransform() const;

    MCAPI ~MatrixStack();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
