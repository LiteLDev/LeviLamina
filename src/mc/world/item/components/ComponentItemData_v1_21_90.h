#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_80;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_90 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>   mUnkc0cc3b;
    ::ll::UntypedStorage<8, 1088> mUnk24dfef;
    ::ll::UntypedStorage<8, 840>  mUnk7a5dbf;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_90& operator=(ComponentItemData_v1_21_90 const&);
    ComponentItemData_v1_21_90();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_90(::ComponentItemData_v1_21_90 const&);

    MCAPI ComponentItemData_v1_21_90(::ComponentItemData_v1_21_90&&);

    MCAPI ~ComponentItemData_v1_21_90();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_80& oldData, ::ComponentItemData_v1_21_90& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_80, ::ComponentItemData_v1_21_90, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_v1_21_90 const&);

    MCAPI void* $ctor(::ComponentItemData_v1_21_90&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
