#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemData_v1_21_30;
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>   mUnk8e559c;
    ::ll::UntypedStorage<8, 1072> mUnk19190e;
    ::ll::UntypedStorage<8, 2640> mUnke76022;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_40& operator=(ComponentItemData_v1_21_40 const&);
    ComponentItemData_v1_21_40(ComponentItemData_v1_21_40 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_40();

    MCAPI ~ComponentItemData_v1_21_40();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_30& oldData, ::ComponentItemData_v1_21_40& newData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Puv::VersionRange const& SUPPORTED_VERSIONS();
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
