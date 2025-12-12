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
    ::ll::UntypedStorage<1, 1> mUnk87eb08;
    // NOLINTEND

public:
    // prevent constructor by default
    IsotropicFaceData& operator=(IsotropicFaceData const&);
    IsotropicFaceData(IsotropicFaceData const&);
    IsotropicFaceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool setTextureIsotropic(::Json::Value const& isotropicData);
    // NOLINTEND
};
