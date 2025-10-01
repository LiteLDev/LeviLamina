#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_40;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_50 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>   mUnkce5bba;
    ::ll::UntypedStorage<8, 1080> mUnk3dd43b;
    ::ll::UntypedStorage<8, 840>  mUnkd21a7d;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_50& operator=(ComponentItemData_v1_21_50 const&);
    ComponentItemData_v1_21_50(ComponentItemData_v1_21_50 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_50();

    MCAPI ~ComponentItemData_v1_21_50();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_40& oldData, ::ComponentItemData_v1_21_50& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_40, ::ComponentItemData_v1_21_50, nullptr_t>& upgrader);
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
