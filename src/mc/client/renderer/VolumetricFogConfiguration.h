#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/VolumetricFogQuality.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct VolumeScatteringParameters; }
// clang-format on

struct VolumetricFogConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 68> mUnkad89d9;
    ::ll::UntypedStorage<4, 68> mUnkbf87ac;
    ::ll::UntypedStorage<4, 68> mUnkf9d7ed;
    ::ll::UntypedStorage<4, 68> mUnk3ea156;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C VolumetricFogConfiguration();

    MCNAPI_C VolumetricFogConfiguration(::VolumetricFogConfiguration const&);

    MCNAPI_C ::dragon::framerenderer::modules::VolumeScatteringParameters
    getVolumeScatteringParameters(::VolumetricFogQuality quality) const;

    MCNAPI_C ::VolumetricFogConfiguration& operator=(::VolumetricFogConfiguration&&);

    MCNAPI_C ::VolumetricFogConfiguration& operator=(::VolumetricFogConfiguration const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::VolumetricFogConfiguration const&);
    // NOLINTEND
};
