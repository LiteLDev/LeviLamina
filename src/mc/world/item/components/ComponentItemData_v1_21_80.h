#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_60;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_80 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>   mUnk748390;
    ::ll::UntypedStorage<8, 1104> mUnkb54ec5;
    ::ll::UntypedStorage<8, 840>  mUnk2dc578;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_80& operator=(ComponentItemData_v1_21_80 const&);
    ComponentItemData_v1_21_80();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_21_80(::ComponentItemData_v1_21_80 const&);

    MCNAPI ~ComponentItemData_v1_21_80();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void moveDeprecatedData(::ComponentItemData_v1_21_60& oldData, ::ComponentItemData_v1_21_80& newData);

    MCNAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_60, ::ComponentItemData_v1_21_80, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemData_v1_21_80 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
