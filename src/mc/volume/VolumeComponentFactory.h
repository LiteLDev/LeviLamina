#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryCereal.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeComponentFactory : public ::EntityComponentFactoryCereal<::VolumeComponentFactory> {
public:
    // prevent constructor by default
    VolumeComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeComponentFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit VolumeComponentFactory(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
