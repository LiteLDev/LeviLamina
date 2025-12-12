#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct ProtectedBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk846d0b;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtectedBlock& operator=(ProtectedBlock const&);
    ProtectedBlock(ProtectedBlock const&);
    ProtectedBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock&&);

    MCNAPI ~ProtectedBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
