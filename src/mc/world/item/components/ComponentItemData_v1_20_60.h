#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/item/ComponentItemComponentData.h"
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_50.h"
#include "mc/world/item/components/ComponentItemDescriptionData_v1_20_20.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_50;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ComponentItemDescriptionData_v1_20_20>              mDescription;
    ::ll::TypedStorage<8, 832, ::SharedTypes::v1_20_60::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 768, ::ComponentItemDeprecatedComponentData_v1_20_50>     mDeprecatedItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_60();

    MCAPI ~ComponentItemData_v1_20_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_20_50& oldData, ::ComponentItemData_v1_20_60& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_50, ::ComponentItemData_v1_20_60, nullptr_t>& upgrader);
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
