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
        ::ll::UntypedStorage<8, 8> mUnka8f7f2;
        ::ll::UntypedStorage<8, 8> mUnk88f465;
        // NOLINTEND

    public:
        // prevent constructor by default
        MatrixStackRef& operator=(MatrixStackRef const&);
        MatrixStackRef(MatrixStackRef const&);
        MatrixStackRef();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::MatrixStack::MatrixStackRef& operator=(::Matrix const& lhs);

        MCNAPI_C ~MatrixStackRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk898c8e;
    ::ll::UntypedStorage<8, 16> mUnkce0904;
    ::ll::UntypedStorage<1, 1>  mUnk796520;
    // NOLINTEND

public:
    // prevent constructor by default
    MatrixStack& operator=(MatrixStack const&);
    MatrixStack(MatrixStack const&);
    MatrixStack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Matrix& _pushIdentity();

    MCNAPI_C ::Matrix& getTop();

    MCNAPI_C ::MatrixStack::MatrixStackRef push(bool isSortOrigin);

    MCNAPI_C ::Matrix const& sortOriginTransform() const;

    MCNAPI_C ~MatrixStack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
