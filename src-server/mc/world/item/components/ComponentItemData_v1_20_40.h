#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemComponentData_v1_20_40.h"
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_40.h"
#include "mc/world/item/components/ComponentItemDescriptionData_v1_20_20.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_30;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ComponentItemDescriptionData_v1_20_20> mDescription;
    ::ll::TypedStorage<8, 1744, ::ComponentItemComponentData_v1_20_40> mItemComponents;
    ::ll::TypedStorage<8, 600, ::ComponentItemDeprecatedComponentData_v1_20_40> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_40();

    MCAPI ~ComponentItemData_v1_20_40();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_20_30& oldData, ::ComponentItemData_v1_20_40& newData);

    MCAPI static void upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_30, ::ComponentItemData_v1_20_40, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
