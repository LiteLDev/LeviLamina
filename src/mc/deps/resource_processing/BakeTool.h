#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace Bedrock::Resources {

class BakeTool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnke09763;
    ::ll::UntypedStorage<8, 928> mUnkbaae44;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeTool& operator=(BakeTool const&);
    BakeTool(BakeTool const&);
    BakeTool();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& PACK_OPTIMIZATION_VERSION();
    // NOLINTEND
};

} // namespace Bedrock::Resources
