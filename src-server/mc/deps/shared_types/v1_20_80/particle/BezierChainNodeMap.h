#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct BezierChainNodeMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8c1758;
    // NOLINTEND

public:
    // prevent constructor by default
    BezierChainNodeMap& operator=(BezierChainNodeMap const&);
    BezierChainNodeMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BezierChainNodeMap(::SharedTypes::v1_20_80::BezierChainNodeMap const&);

    MCNAPI ::SharedTypes::v1_20_80::BezierChainNodeMap& operator=(::SharedTypes::v1_20_80::BezierChainNodeMap&&);

    MCNAPI ~BezierChainNodeMap();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::BezierChainNodeMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
