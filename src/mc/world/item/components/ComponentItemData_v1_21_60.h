#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/ComponentItemComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/ItemDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_50;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_60::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1208, ::SharedTypes::v1_21_60::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_60& operator=(ComponentItemData_v1_21_60 const&);
    ComponentItemData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60&&);

    MCAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60 const&);

    MCFOLD ::ComponentItemData_v1_21_60& operator=(::ComponentItemData_v1_21_60&&);

    MCAPI ~ComponentItemData_v1_21_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_50, ::ComponentItemData_v1_21_60, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ComponentItemData_v1_21_60&&);

    MCFOLD void* $ctor(::ComponentItemData_v1_21_60 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
