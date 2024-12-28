#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct BlockRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbfb34c;
    ::ll::UntypedStorage<8, 24> mUnkffbc45;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRules& operator=(BlockRules const&);
    BlockRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockRules(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules&&);

    MCAPI ~BlockRules();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
