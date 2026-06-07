#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_21_90/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_90;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 1344, ::SharedTypes::v1_21_90::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_110& operator=(ComponentItemData_v1_21_110 const&);
    ComponentItemData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_110(::ComponentItemData_v1_21_110&&);

    MCAPI ComponentItemData_v1_21_110(::ComponentItemData_v1_21_110 const&);

    MCFOLD ::ComponentItemData_v1_21_110& operator=(::ComponentItemData_v1_21_110&&);

    MCAPI ~ComponentItemData_v1_21_110();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_90, ::ComponentItemData_v1_21_110, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ComponentItemData_v1_21_110&&);

    MCFOLD void* $ctor(::ComponentItemData_v1_21_110 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
