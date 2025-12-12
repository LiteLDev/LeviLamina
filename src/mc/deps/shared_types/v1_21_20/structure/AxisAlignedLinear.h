#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct AxisAlignedLinear {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdc1521;
    ::ll::UntypedStorage<4, 4> mUnkef0f99;
    ::ll::UntypedStorage<4, 4> mUnk98eb54;
    ::ll::UntypedStorage<4, 4> mUnk6948a0;
    ::ll::UntypedStorage<1, 1> mUnk3534c1;
    // NOLINTEND

public:
    // prevent constructor by default
    AxisAlignedLinear& operator=(AxisAlignedLinear const&);
    AxisAlignedLinear(AxisAlignedLinear const&);
    AxisAlignedLinear();
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
