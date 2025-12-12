#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct BlockIgnore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8371ab;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIgnore& operator=(BlockIgnore const&);
    BlockIgnore(BlockIgnore const&);
    BlockIgnore();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockIgnore();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
