#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_80;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_10 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>  mUnka7776c;
    ::ll::UntypedStorage<8, 920> mUnk9ae327;
    ::ll::UntypedStorage<8, 840> mUnk8a1d59;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_10& operator=(ComponentItemData_v1_21_10 const&);
    ComponentItemData_v1_21_10(ComponentItemData_v1_21_10 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_10();

    MCAPI ~ComponentItemData_v1_21_10();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_20_80& oldData, ::ComponentItemData_v1_21_10& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_80, ::ComponentItemData_v1_21_10, nullptr_t>& upgrader);
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
