#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_30/item/ItemDeprecatedComponentData.h"
#include "mc/world/item/components/ComponentItemComponentData_v1_20_30.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_20;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 2272, ::ComponentItemComponentData_v1_20_30>               mItemComponents;
    ::ll::TypedStorage<8, 104, ::SharedTypes::v1_20_30::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ComponentItemData_v1_20_30();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_20, ::ComponentItemData_v1_20_30, nullptr_t>& upgrader);
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
