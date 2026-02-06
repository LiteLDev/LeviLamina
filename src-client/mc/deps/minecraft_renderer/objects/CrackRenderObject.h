#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct CrackRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mMesh;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mCrackMat;
    ::ll::TypedStorage<1, 1, bool>                            mAlphaTest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CrackRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
