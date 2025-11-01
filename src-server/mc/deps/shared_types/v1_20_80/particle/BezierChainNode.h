#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct BezierChainNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc2ecc9;
    ::ll::UntypedStorage<4, 4> mUnk40fc37;
    ::ll::UntypedStorage<4, 4> mUnk852220;
    ::ll::UntypedStorage<4, 4> mUnk2656b7;
    // NOLINTEND

public:
    // prevent constructor by default
    BezierChainNode& operator=(BezierChainNode const&);
    BezierChainNode(BezierChainNode const&);
    BezierChainNode();

};

}
