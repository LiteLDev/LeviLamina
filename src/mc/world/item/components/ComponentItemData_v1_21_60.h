#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemData_v1_21_50;
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>   mUnk67768e;
    ::ll::UntypedStorage<8, 1096> mUnkc71532;
    ::ll::UntypedStorage<8, 2640> mUnkd8b747;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60&&);

    MCAPI ComponentItemData_v1_21_60(::ComponentItemData_v1_21_60 const&);

    MCAPI ::ComponentItemData_v1_21_60& operator=(::ComponentItemData_v1_21_60&&);

    MCAPI ::ComponentItemData_v1_21_60& operator=(::ComponentItemData_v1_21_60 const&);

    MCAPI ~ComponentItemData_v1_21_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_21_50& oldData, ::ComponentItemData_v1_21_60& newData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Puv::VersionRange const& SUPPORTED_VERSIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_v1_21_60&&);

    MCAPI void* $ctor(::ComponentItemData_v1_21_60 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
