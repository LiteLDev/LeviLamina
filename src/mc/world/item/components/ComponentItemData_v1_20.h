#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_0/item/ItemDescription.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_20_0::ItemDescription>       mDescription;
    ::ll::TypedStorage<8, 16, ::IItemComponentLegacyFactoryData::Components> mItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_20(ComponentItemData_v1_20 const&);
    ComponentItemData_v1_20();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemData_v1_20& operator=(::ComponentItemData_v1_20 const&);

    MCAPI ~ComponentItemData_v1_20();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
