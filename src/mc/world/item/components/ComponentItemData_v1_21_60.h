#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 88>   mUnk67768e;
    ::ll::UntypedStorage<8, 1096> mUnkc71532;
    ::ll::UntypedStorage<8, 840>  mUnkd8b747;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_60& operator=(ComponentItemData_v1_21_60 const&);
    ComponentItemData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60 const&);

    MCAPI ~ComponentItemData_v1_21_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_50& oldData, ::ComponentItemData_v1_21_60& newData);

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
    MCFOLD void* $ctor(::ComponentItemData_v1_21_60 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
