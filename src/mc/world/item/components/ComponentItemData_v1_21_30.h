#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_10;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>   mUnkc7ff83;
    ::ll::UntypedStorage<8, 1072> mUnk647fce;
    ::ll::UntypedStorage<8, 840>  mUnk64da54;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_30& operator=(ComponentItemData_v1_21_30 const&);
    ComponentItemData_v1_21_30(ComponentItemData_v1_21_30 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_21_30();

    MCNAPI ~ComponentItemData_v1_21_30();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void moveDeprecatedData(::ComponentItemData_v1_21_10& oldData, ::ComponentItemData_v1_21_30& newData);

    MCNAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_21_10, ::ComponentItemData_v1_21_30, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
