#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IBlockArchetype;
// clang-format on

class BlockArchetypePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IBlockArchetype>> mArchetype;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockArchetypePtr(BlockArchetypePtr const&);
    BlockArchetypePtr();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BlockArchetypePtr& operator=(::BlockArchetypePtr&&);

    MCFOLD ::BlockArchetypePtr& operator=(::BlockArchetypePtr const&);
    // NOLINTEND
};
