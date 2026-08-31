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
    MCAPI bool setTextureIsotropic(::Json::Value const& isotropicData);
    // NOLINTEND
};
