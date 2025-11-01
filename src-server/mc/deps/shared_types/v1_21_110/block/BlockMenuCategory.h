#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb7ef24;
    ::ll::UntypedStorage<8, 40> mUnk35c9bc;
    ::ll::UntypedStorage<1, 2>  mUnkb689c1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMenuCategory(BlockMenuCategory const&);
    BlockMenuCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory const&);

    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockMenuCategory&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
