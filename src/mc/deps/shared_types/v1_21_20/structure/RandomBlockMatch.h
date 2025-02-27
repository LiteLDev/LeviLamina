#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct RandomBlockMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk88cfc8;
    ::ll::UntypedStorage<4, 4>  mUnk376641;
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
