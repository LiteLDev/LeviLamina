#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/item/ComponentItemComponentData.h"
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_80.h"
#include "mc/world/item/components/ComponentItemDescriptionData_v1_21_110.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_110;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_26_0 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ComponentItemDescriptionData_v1_21_110>             mDescription;
    ::ll::TypedStorage<8, 1248, ::SharedTypes::v1_26_0::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 840, ::ComponentItemDeprecatedComponentData_v1_20_80>     mDeprecatedItemComponents;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ComponentItemData_v1_26_0();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ComponentItemData_v1_26_0(ComponentItemData_v1_26_0 const&);
    ComponentItemData_v1_26_0();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0&&);

#ifdef LL_PLAT_S
    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0 const&);
#endif

    MCAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0&&);

    MCAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0 const&);

    MCAPI ~ComponentItemData_v1_26_0();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCFOLD static void moveDeprecatedData(::ComponentItemData_v1_21_110& oldData, ::ComponentItemData_v1_26_0& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_110, ::ComponentItemData_v1_26_0, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_v1_26_0&&);

#ifdef LL_PLAT_S
    MCAPI void* $ctor(::ComponentItemData_v1_26_0 const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
