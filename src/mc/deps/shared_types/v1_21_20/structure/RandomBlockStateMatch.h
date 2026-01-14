#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct RandomBlockStateMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mBlockState;
    ::ll::TypedStorage<4, 4, float>                                    mProbability;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RandomBlockStateMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
