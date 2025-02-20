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
    ProtectedBlock(ProtectedBlock const&);
    ProtectedBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock const&);

    MCAPI ~ProtectedBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
