#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_26_0/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_26_0 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 1344, ::SharedTypes::v1_26_0::ComponentItemComponentData>  mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_26_0& operator=(ComponentItemData_v1_26_0 const&);
    ComponentItemData_v1_26_0();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0&&);

    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0 const&);

    MCAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0&&);

    MCAPI ~ComponentItemData_v1_26_0();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_v1_26_0&&);

    MCAPI void* $ctor(::ComponentItemData_v1_26_0 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
