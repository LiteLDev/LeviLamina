#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct RandomBlockMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>> mBlockName;
    ::ll::TypedStorage<4, 4, float>                        mProbability;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBlockMatch(RandomBlockMatch const&);
    RandomBlockMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch const&);

    MCAPI ~RandomBlockMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
