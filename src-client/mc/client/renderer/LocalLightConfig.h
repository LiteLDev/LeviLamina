#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LocalLightConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LocalLightConfig inner types declare
    // clang-format off
    struct LocalLightConfigSettingsV0;
    // clang-format on

    // LocalLightConfig inner types define
    struct LocalLightConfigSettingsV0 {
    public:
        // LocalLightConfigSettingsV0 inner types declare
        // clang-format off
        struct BlockLightingData;
        // clang-format on

        // LocalLightConfigSettingsV0 inner types define
        struct BlockLightingData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 20> mUnka5b223;
            ::ll::UntypedStorage<1, 1>  mUnkfcc3fe;
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
        ::ll::UntypedStorage<8, 64> mUnk6847c8;
        ::ll::UntypedStorage<8, 32> mUnk5eae5a;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalLightConfigSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LocalLightConfigSettingsV0(::LocalLightConfig::LocalLightConfigSettingsV0 const&);

        MCNAPI ::LocalLightConfig::LocalLightConfigSettingsV0&
        operator=(::LocalLightConfig::LocalLightConfigSettingsV0 const&);

        MCNAPI ::LocalLightConfig::LocalLightConfigSettingsV0&
        operator=(::LocalLightConfig::LocalLightConfigSettingsV0&&);

        MCNAPI ~LocalLightConfigSettingsV0();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::LocalLightConfig::LocalLightConfigSettingsV0 const&);
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
    ::ll::UntypedStorage<8, 96> mUnk8c9140;
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

    MCNAPI void finalizeResources();

    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);

    MCNAPI ::Puv::LoadResultAny
    loadFromString(::cereal::ReflectionCtx const& ctx, ::std::string const& pointLightsJson);

    MCNAPI ::std::optional<::std::string> serializeToString(::cereal::ReflectionCtx const& ctx) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLocalLightParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& LOCAL_LIGHTS_GLOBAL_CONFIG_FILE();

    MCNAPI static ::std::string_view const& PAYLOAD_KEY_V0();
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

// free functions
// NOLINTBEGIN
MCNAPI_C bool operator==(
    ::LocalLightConfig::LocalLightConfigSettingsV0::BlockLightingData const& __P0,
    ::LocalLightConfig::LocalLightConfigSettingsV0::BlockLightingData const& __P1
);
// NOLINTEND
