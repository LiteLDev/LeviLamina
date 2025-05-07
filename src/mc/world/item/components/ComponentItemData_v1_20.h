#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkafbe72;
    ::ll::UntypedStorage<8, 16> mUnk7a10de;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_20& operator=(ComponentItemData_v1_20 const&);
    ComponentItemData_v1_20(ComponentItemData_v1_20 const&);
    ComponentItemData_v1_20();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComponentItemData_v1_20();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Puv::VersionRange const& SUPPORTED_VERSIONS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
