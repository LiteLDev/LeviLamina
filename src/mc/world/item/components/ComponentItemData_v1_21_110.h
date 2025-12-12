#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 88>   mUnk6e74e5;
    ::ll::UntypedStorage<8, 1096> mUnkb1fe0c;
    ::ll::UntypedStorage<8, 840>  mUnk6275d1;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_110& operator=(ComponentItemData_v1_21_110 const&);
    ComponentItemData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_21_110(::ComponentItemData_v1_21_110&&);

    MCNAPI ComponentItemData_v1_21_110(::ComponentItemData_v1_21_110 const&);

    MCNAPI ~ComponentItemData_v1_21_110();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void
    moveDeprecatedData(::ComponentItemData_v1_21_90& oldData, ::ComponentItemData_v1_21_110& newData);

    MCNAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_90, ::ComponentItemData_v1_21_110, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemData_v1_21_110&&);

    MCNAPI void* $ctor(::ComponentItemData_v1_21_110 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
