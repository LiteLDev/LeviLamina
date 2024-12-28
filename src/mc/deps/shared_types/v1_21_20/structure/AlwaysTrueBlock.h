#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct AlwaysTrueBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkcd5bc6;
    // NOLINTEND

public:
    // prevent constructor by default
    AlwaysTrueBlock& operator=(AlwaysTrueBlock const&);
    AlwaysTrueBlock(AlwaysTrueBlock const&);
    AlwaysTrueBlock();
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
