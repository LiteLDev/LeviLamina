#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LocalLightConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LocalLightConfig inner types declare
    // clang-format off
    struct LocalLightConfigSettingsV0;
    struct LocalLightConfigSettingsV1;
    // clang-format on

    // LocalLightConfig inner types define
    struct LocalLightConfigSettingsV0 {
    public:
        // LocalLightConfigSettingsV0 inner types declare
        // clang-format off
        struct LocalLightSettings;
        // clang-format on

        // LocalLightConfigSettingsV0 inner types define
        struct LocalLightSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 64> mUnk355dca;
            // NOLINTEND

        public:
            // prevent constructor by default
            LocalLightSettings& operator=(LocalLightSettings const&);
            LocalLightSettings(LocalLightSettings const&);
            LocalLightSettings();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::LocalLightConfig::LocalLightConfigSettingsV0::LocalLightSettings&
            operator=(::LocalLightConfig::LocalLightConfigSettingsV0::LocalLightSettings&&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnka027d3;
        ::ll::UntypedStorage<8, 64> mUnk2b6afe;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalLightConfigSettingsV0& operator=(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LocalLightConfigSettingsV0();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LocalLightConfigSettingsV1 {
    public:
        // LocalLightConfigSettingsV1 inner types declare
        // clang-format off
        struct BlockLightingData;
        // clang-format on

        // LocalLightConfigSettingsV1 inner types define
        struct BlockLightingData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 20> mUnkebc171;
            ::ll::UntypedStorage<1, 1>  mUnk484789;
            // NOLINTEND

        public:
            // prevent constructor by default
            BlockLightingData& operator=(BlockLightingData const&);
            BlockLightingData(BlockLightingData const&);
            BlockLightingData();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd40d90;
        ::ll::UntypedStorage<8, 32> mUnk195ecb;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalLightConfigSettingsV1& operator=(LocalLightConfigSettingsV1 const&);
        LocalLightConfigSettingsV1(LocalLightConfigSettingsV1 const&);
        LocalLightConfigSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::LocalLightConfig::LocalLightConfigSettingsV1&
        operator=(::LocalLightConfig::LocalLightConfigSettingsV1&&);

        MCNAPI ~LocalLightConfigSettingsV1();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk81efc3;
    ::ll::UntypedStorage<8, 16> mUnkba8e14;
    ::ll::UntypedStorage<8, 24> mUnk2e35a0;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLightConfig& operator=(LocalLightConfig const&);
    LocalLightConfig(LocalLightConfig const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalLightConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalLightConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLocalLightParameters(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY_V0();

    MCNAPI static ::std::string_view const& PAYLOAD_KEY_V1();
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
