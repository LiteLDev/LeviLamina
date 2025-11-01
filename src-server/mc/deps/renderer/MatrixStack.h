#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk898c8e;
    ::ll::UntypedStorage<8, 16> mUnkce0904;
    ::ll::UntypedStorage<1, 1> mUnk796520;
    // NOLINTEND

public:
    // prevent constructor by default
    MatrixStack& operator=(MatrixStack const&);
    MatrixStack(MatrixStack const&);
    MatrixStack();

};
