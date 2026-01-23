#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_80/item/ComponentItemComponentData.h"
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_80.h"
#include "mc/world/item/components/ComponentItemDescriptionData_v1_21_60.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_60;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_80 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ComponentItemDescriptionData_v1_21_60>               mDescription;
    ::ll::TypedStorage<8, 1112, ::SharedTypes::v1_21_80::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 840, ::ComponentItemDeprecatedComponentData_v1_20_80>      mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_80(ComponentItemData_v1_21_80 const&);
    ComponentItemData_v1_21_80();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ComponentItemData_v1_21_80& operator=(::ComponentItemData_v1_21_80 const&);

    MCAPI ~ComponentItemData_v1_21_80();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_60& oldData, ::ComponentItemData_v1_21_80& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_60, ::ComponentItemData_v1_21_80, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
