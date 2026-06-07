#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_30/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1176, ::SharedTypes::v1_21_30::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_30& operator=(ComponentItemData_v1_21_30 const&);
    ComponentItemData_v1_21_30();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_30(::ComponentItemData_v1_21_30&&);

    MCAPI ComponentItemData_v1_21_30(::ComponentItemData_v1_21_30 const&);

    MCAPI ::ComponentItemData_v1_21_30& operator=(::ComponentItemData_v1_21_30&&);

    MCAPI ~ComponentItemData_v1_21_30();
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_v1_21_30&&);

    MCAPI void* $ctor(::ComponentItemData_v1_21_30 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
