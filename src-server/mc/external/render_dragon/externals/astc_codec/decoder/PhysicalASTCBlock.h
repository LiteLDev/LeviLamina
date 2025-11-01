#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class PhysicalASTCBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc9ec2d;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicalASTCBlock& operator=(PhysicalASTCBlock const&);
    PhysicalASTCBlock(PhysicalASTCBlock const&);
    PhysicalASTCBlock();

};

}
