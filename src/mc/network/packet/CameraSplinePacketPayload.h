#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0 { struct CameraSplineDefinition; }
// clang-format on

struct CameraSplinePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraSplinePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
