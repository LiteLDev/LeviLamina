#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct BlockRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkffbc45;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRules& operator=(BlockRules const&);
    BlockRules(BlockRules const&);
    BlockRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
