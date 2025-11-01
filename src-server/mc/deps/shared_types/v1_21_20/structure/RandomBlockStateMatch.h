#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct RandomBlockStateMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk4b8325;
    ::ll::UntypedStorage<4, 4>  mUnk7bf44e;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBlockStateMatch& operator=(RandomBlockStateMatch const&);
    RandomBlockStateMatch(RandomBlockStateMatch const&);
    RandomBlockStateMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RandomBlockStateMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
