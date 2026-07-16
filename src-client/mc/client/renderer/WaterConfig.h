#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersion;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules::water { struct WaterParameters; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CausticsParameters; }
namespace mce::framebuilder { struct WaterSurfaceParameters; }
// clang-format on

class WaterConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // WaterConfig inner types declare
    // clang-format off
    struct WaterConfigSettingsV0;
    struct WaterConfigSettingsV1;
    struct WaterConfigSettingsV2;
    struct WaterConfigSettingsV3;
    struct WaterConfigSettingsV4;
    struct CausticsTexture;
    // clang-format on

    // WaterConfig inner types define
    struct WaterConfigSettingsV0 {
    public:
        // WaterConfigSettingsV0 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV0 inner types define
        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct WaterDescription;
            struct PSY;
            struct Waves;
            // clang-format on

            // WaterSettings inner types define
            struct WaterDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk69d0de;
                // NOLINTEND

            public:
                // prevent constructor by default
                WaterDescription& operator=(WaterDescription const&);
                WaterDescription(WaterDescription const&);
                WaterDescription();

            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI ~WaterDescription();
                // NOLINTEND

            public:
                // destructor thunk
                // NOLINTBEGIN
                MCNAPI void $dtor();
                // NOLINTEND
            };

            struct PSY {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 8> mUnkba9b05;
                ::ll::UntypedStorage<4, 8> mUnk8a0463;
                ::ll::UntypedStorage<4, 8> mUnkb3e8b1;
                // NOLINTEND

            public:
                // prevent constructor by default
                PSY& operator=(PSY const&);
                PSY(PSY const&);
                PSY();
            };

            struct Waves {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 2> mUnk8d8752;
                ::ll::UntypedStorage<4, 8> mUnkb37626;
                ::ll::UntypedStorage<4, 8> mUnkf40d6f;
                ::ll::UntypedStorage<4, 8> mUnka29ce5;
                ::ll::UntypedStorage<4, 8> mUnk1d95f0;
                ::ll::UntypedStorage<4, 8> mUnkc8fa3f;
                ::ll::UntypedStorage<4, 8> mUnk3440f5;
                ::ll::UntypedStorage<4, 8> mUnk947c21;
                ::ll::UntypedStorage<4, 8> mUnk945515;
                ::ll::UntypedStorage<4, 8> mUnkec9603;
                ::ll::UntypedStorage<4, 8> mUnkd2fe50;
                // NOLINTEND

            public:
                // prevent constructor by default
                Waves& operator=(Waves const&);
                Waves(Waves const&);
                Waves();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnk9d7280;
            ::ll::UntypedStorage<4, 28> mUnk24f185;
            ::ll::UntypedStorage<4, 88> mUnkfe4362;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk21f82b;
        ::ll::UntypedStorage<8, 168> mUnkdf7d69;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV0& operator=(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0();
    };

    struct WaterConfigSettingsV1 {
    public:
        // WaterConfigSettingsV1 inner types declare
        // clang-format off
        struct WaterSurfaceParametersBase;
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV1 inner types define
        struct WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 2> mUnka659a5;
            ::ll::UntypedStorage<4, 8> mUnk8d00af;
            ::ll::UntypedStorage<4, 8> mUnk47ec65;
            ::ll::UntypedStorage<4, 8> mUnk3248b2;
            ::ll::UntypedStorage<4, 8> mUnk7592d7;
            ::ll::UntypedStorage<4, 8> mUnk722b0d;
            ::ll::UntypedStorage<4, 8> mUnkb4f86d;
            ::ll::UntypedStorage<4, 8> mUnk97a1a7;
            ::ll::UntypedStorage<4, 8> mUnk20c286;
            ::ll::UntypedStorage<4, 8> mUnk413ab8;
            ::ll::UntypedStorage<4, 8> mUnkfe5a1f;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSurfaceParametersBase& operator=(WaterSurfaceParametersBase const&);
            WaterSurfaceParametersBase(WaterSurfaceParametersBase const&);
            WaterSurfaceParametersBase();
        };

        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnke46d70;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSurfaceParameters& operator=(WaterSurfaceParameters const&);
            WaterSurfaceParameters(WaterSurfaceParameters const&);
            WaterSurfaceParameters();
        };

        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct CausticsParameters;
            // clang-format on

            // WaterSettings inner types define
            struct CausticsParameters {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 40> mUnk4d3d5f;
                ::ll::UntypedStorage<4, 8>  mUnk1e3838;
                ::ll::UntypedStorage<4, 8>  mUnk456a47;
                ::ll::UntypedStorage<4, 8>  mUnk2d0aba;
                ::ll::UntypedStorage<1, 2>  mUnke14f68;
                // NOLINTEND

            public:
                // prevent constructor by default
                CausticsParameters& operator=(CausticsParameters const&);
                CausticsParameters(CausticsParameters const&);
                CausticsParameters();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnk69e561;
            ::ll::UntypedStorage<4, 28> mUnk2479ad;
            ::ll::UntypedStorage<8, 80> mUnkd2f9bc;
            ::ll::UntypedStorage<4, 96> mUnk535895;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk290fa3;
        ::ll::UntypedStorage<8, 256> mUnk5d3758;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV1& operator=(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
    };

    struct WaterConfigSettingsV2 {
    public:
        // WaterConfigSettingsV2 inner types declare
        // clang-format off
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV2 inner types define
        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {};

        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnka95010;
            ::ll::UntypedStorage<4, 28> mUnk43f246;
            ::ll::UntypedStorage<8, 80> mUnkced3c8;
            ::ll::UntypedStorage<4, 88> mUnke3f5f0;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk99ad3b;
        ::ll::UntypedStorage<8, 248> mUnk6b116a;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV2& operator=(WaterConfigSettingsV2 const&);
        WaterConfigSettingsV2(WaterConfigSettingsV2 const&);
        WaterConfigSettingsV2();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
    };

    struct WaterConfigSettingsV3 {
    public:
        // WaterConfigSettingsV3 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV3 inner types define
        struct WaterSettings : public ::WaterConfig::WaterConfigSettingsV2::WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnk9acba2;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk6401e6;
        ::ll::UntypedStorage<8, 256> mUnk910afd;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV3& operator=(WaterConfigSettingsV3 const&);
        WaterConfigSettingsV3(WaterConfigSettingsV3 const&);
        WaterConfigSettingsV3();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
    };

    struct WaterConfigSettingsV4 {
    public:
        // WaterConfigSettingsV4 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV4 inner types define
        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk3e9d66;
            ::ll::UntypedStorage<4, 28> mUnkb13001;
            ::ll::UntypedStorage<8, 80> mUnke1be9f;
            ::ll::UntypedStorage<4, 88> mUnka06177;
            ::ll::UntypedStorage<4, 8>  mUnk2c2068;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);

            MCNAPI ~WaterSettings();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);
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
        ::ll::UntypedStorage<8, 32>  mUnkb22171;
        ::ll::UntypedStorage<8, 240> mUnk7272f7;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV4& operator=(WaterConfigSettingsV4 const&);
        WaterConfigSettingsV4(WaterConfigSettingsV4 const&);
        WaterConfigSettingsV4();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV4();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CausticsTexture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk57ab7a;
        ::ll::UntypedStorage<4, 4>  mUnkc7e6dd;
        // NOLINTEND

    public:
        // prevent constructor by default
        CausticsTexture& operator=(CausticsTexture const&);
        CausticsTexture(CausticsTexture const&);
        CausticsTexture();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk1de33d;
    ::ll::UntypedStorage<8, 272> mUnkd0c7b7;
    ::ll::UntypedStorage<8, 64>  mUnk540034;
    ::ll::UntypedStorage<8, 32>  mUnka1f463;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfig& operator=(WaterConfig const&);
    WaterConfig(WaterConfig const&);
    WaterConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaterConfig() /*override*/;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WaterConfig(::IMinecraftEventing& eventing);

    MCNAPI bool containsWaterSettings(::HashedString const& biomeID) const;

    MCNAPI ::mce::framebuilder::CausticsParameters getCausticsParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters getWaterParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters
    getWaterParameters(::HashedString const& biomeID) const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters() const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters(::HashedString const& biomeID) const;

    MCNAPI void loadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void unloadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI bool validateAndSetCausticsTexture();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindWaterParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerConfigMappingChangeHandler(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer
    );

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::Puv::LoadResultAny $loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI void $_setDefaultIdentifierImpl(::HashedString const& defaultIdentifier);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
