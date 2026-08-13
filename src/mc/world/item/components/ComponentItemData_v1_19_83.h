#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

struct ComponentItemData_v1_19_83 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::IItemComponentLegacyFactoryData::Components> mItemComponents;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND
};
