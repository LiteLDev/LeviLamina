#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_21_80/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_80 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_60::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1208, ::SharedTypes::v1_21_80::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_80& operator=(ComponentItemData_v1_21_80 const&);
    ComponentItemData_v1_21_80();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_80(::ComponentItemData_v1_21_80&&);

    MCAPI ComponentItemData_v1_21_80(::ComponentItemData_v1_21_80 const&);

    MCFOLD ::ComponentItemData_v1_21_80& operator=(::ComponentItemData_v1_21_80&&);

    MCAPI ~ComponentItemData_v1_21_80();
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
    MCFOLD void* $ctor(::ComponentItemData_v1_21_80&&);

    MCFOLD void* $ctor(::ComponentItemData_v1_21_80 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
