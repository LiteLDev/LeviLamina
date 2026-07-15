#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct BezierChainNode; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct BezierChainNodeMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::SharedTypes::v1_20_80::BezierChainNode>>> mMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BezierChainNodeMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
