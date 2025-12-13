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
    ::ll::UntypedStorage<8, 1104> mUnkc71532;
    ::ll::UntypedStorage<8, 840>  mUnkd8b747;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_60& operator=(ComponentItemData_v1_21_60 const&);
    ComponentItemData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60 const&);

    MCNAPI ~ComponentItemData_v1_21_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void moveDeprecatedData(::ComponentItemData_v1_21_50& oldData, ::ComponentItemData_v1_21_60& newData);

    MCNAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_50, ::ComponentItemData_v1_21_60, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemData_v1_21_60 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
