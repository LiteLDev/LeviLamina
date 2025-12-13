#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/UpscalingQuality.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct UpscalingParameters; }
// clang-format on

struct UpscalingConfiguration {
public:
    // UpscalingConfiguration inner types declare
    // clang-format off
    struct Configs;
    // clang-format on

    // UpscalingConfiguration inner types define
    struct Configs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 52> mUnk1018f1;
        ::ll::UntypedStorage<4, 52> mUnk313843;
        ::ll::UntypedStorage<4, 52> mUnke61b18;
        ::ll::UntypedStorage<4, 52> mUnkc0751b;
        ::ll::UntypedStorage<4, 52> mUnkeabfe0;
        ::ll::UntypedStorage<4, 52> mUnk59d2b6;
        ::ll::UntypedStorage<4, 52> mUnk1e3773;
        ::ll::UntypedStorage<4, 52> mUnk173aec;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C Configs();

        MCNAPI_C Configs(::UpscalingConfiguration::Configs const&);

        MCNAPI_C ::UpscalingConfiguration::Configs& operator=(::UpscalingConfiguration::Configs&&);

        MCNAPI_C ::UpscalingConfiguration::Configs& operator=(::UpscalingConfiguration::Configs const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();

        MCNAPI_C void* $ctor(::UpscalingConfiguration::Configs const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 416> mUnk784765;
    // NOLINTEND

public:
    // prevent constructor by default
    UpscalingConfiguration& operator=(UpscalingConfiguration const&);
    UpscalingConfiguration(UpscalingConfiguration const&);
    UpscalingConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::dragon::framerenderer::modules::UpscalingParameters
    getUpscalingParameters(::UpscalingQuality quality, ::glm::vec<2, ushort> const& targetResolution) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
