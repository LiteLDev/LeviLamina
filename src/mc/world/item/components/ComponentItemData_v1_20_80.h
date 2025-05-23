#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemData_v1_20_60;
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_80 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>   mUnkaa669c;
    ::ll::UntypedStorage<8, 856>  mUnkcc717d;
    ::ll::UntypedStorage<8, 2640> mUnk388abc;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_20_80& operator=(ComponentItemData_v1_20_80 const&);
    ComponentItemData_v1_20_80(ComponentItemData_v1_20_80 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_v1_20_80();

    MCNAPI ~ComponentItemData_v1_20_80();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void moveDeprecatedData(::ComponentItemData_v1_20_60& oldData, ::ComponentItemData_v1_20_80& newData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Puv::VersionRange const& SUPPORTED_VERSIONS();
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
