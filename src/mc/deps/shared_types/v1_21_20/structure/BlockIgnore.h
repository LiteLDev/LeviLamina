#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct BlockIgnore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk16c792;
    ::ll::UntypedStorage<8, 24> mUnkf676af;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIgnore& operator=(BlockIgnore const&);
    BlockIgnore();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockIgnore(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore&&);

    MCAPI ~BlockIgnore();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
