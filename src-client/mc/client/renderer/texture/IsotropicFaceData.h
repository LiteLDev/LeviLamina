#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsotropicFaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFaceTextureIsotropic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IsotropicFaceData();

    MCAPI bool isTextureIsotropic(uchar face) const;

    MCAPI bool setTextureIsotropic(::Json::Value const& isotropicData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
