#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct BezierChainNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct BezierChainNodeMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::SharedTypes::v1_20_80::BezierChainNode>>> mMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BezierChainNodeMap& operator=(BezierChainNodeMap const&);
    BezierChainNodeMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BezierChainNodeMap(::SharedTypes::v1_20_80::BezierChainNodeMap const&);

    MCFOLD ::SharedTypes::v1_20_80::BezierChainNodeMap& operator=(::SharedTypes::v1_20_80::BezierChainNodeMap&&);

    MCAPI ~BezierChainNodeMap();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::BezierChainNodeMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
