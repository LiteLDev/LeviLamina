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
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch const&);

    MCNAPI ~RandomBlockMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
