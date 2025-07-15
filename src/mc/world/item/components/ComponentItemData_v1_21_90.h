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
    ::ll::UntypedStorage<8, 1104> mUnk24dfef;
    ::ll::UntypedStorage<8, 840>  mUnk7a5dbf;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_90();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_21_90(::ComponentItemData_v1_21_90 const&);

    MCNAPI ComponentItemData_v1_21_90(::ComponentItemData_v1_21_90&&);

    MCNAPI ::ComponentItemData_v1_21_90& operator=(::ComponentItemData_v1_21_90 const&);

    MCNAPI ~ComponentItemData_v1_21_90();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void moveDeprecatedData(::ComponentItemData_v1_21_80& oldData, ::ComponentItemData_v1_21_90& newData);

    MCNAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_80, ::ComponentItemData_v1_21_90, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemData_v1_21_90 const&);

    MCNAPI void* $ctor(::ComponentItemData_v1_21_90&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
