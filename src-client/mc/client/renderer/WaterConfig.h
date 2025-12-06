#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/WaterSurfaceParameters.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LocalPlayer;
class SemVersion;
struct IMinecraftEventing;
struct LinkedAssetValidator;
struct ResourcePackManager;
struct SemVersionConstant;
namespace Editor::Services { struct ClientDataTransferServiceProvider; }
namespace Puv { struct LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CausticsParameters; }
// clang-format on

class WaterConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // WaterConfig inner types declare
    // clang-format off
    struct WaterConfigSettingsV0;
    struct WaterConfigSettingsV1;
    struct WaterConfigSettingsV2;
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
            struct PSY;
            struct WaterDescription;
            struct Waves;
            // clang-format on

            // WaterSettings inner types define
            struct WaterDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnkcaeae4;
                // NOLINTEND

            public:
                // prevent constructor by default
                WaterDescription& operator=(WaterDescription const&);
                WaterDescription(WaterDescription const&);
                WaterDescription();

            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI ::WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription&
                operator=(::WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription&&);

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
                ::ll::UntypedStorage<4, 4> mUnke5cd0a;
                ::ll::UntypedStorage<4, 4> mUnk52db37;
                ::ll::UntypedStorage<4, 4> mUnkd82edf;
                // NOLINTEND

            public:
                // prevent constructor by default
                PSY& operator=(PSY const&);
                PSY(PSY const&);
                PSY();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct Waves {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnk32d104;
                ::ll::UntypedStorage<4, 4> mUnk261376;
                ::ll::UntypedStorage<4, 4> mUnk401d49;
                ::ll::UntypedStorage<4, 4> mUnkb144f7;
                ::ll::UntypedStorage<4, 4> mUnk6d11fb;
                ::ll::UntypedStorage<4, 4> mUnk5eaf5b;
                ::ll::UntypedStorage<4, 4> mUnk64a1a4;
                ::ll::UntypedStorage<4, 4> mUnkfcf4ab;
                ::ll::UntypedStorage<4, 4> mUnk45a9b7;
                ::ll::UntypedStorage<4, 4> mUnk593ccd;
                ::ll::UntypedStorage<4, 4> mUnk55f096;
                // NOLINTEND

            public:
                // prevent constructor by default
                Waves& operator=(Waves const&);
                Waves(Waves const&);
                Waves();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk598340;
            ::ll::UntypedStorage<4, 12> mUnka32d9d;
            ::ll::UntypedStorage<4, 44> mUnk50f91a;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::WaterConfig::WaterConfigSettingsV0::WaterSettings&
            operator=(::WaterConfig::WaterConfigSettingsV0::WaterSettings&&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk173c70;
        ::ll::UntypedStorage<8, 88> mUnkdb5f45;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV0& operator=(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct WaterConfigSettingsV1 {
    public:
        // WaterConfigSettingsV1 inner types declare
        // clang-format off
        struct WaterSettings;
        struct WaterSurfaceParameters;
        // clang-format on

        // WaterConfigSettingsV1 inner types define
        struct WaterSurfaceParameters : public ::mce::framebuilder::WaterSurfaceParameters {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk60878f;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSurfaceParameters& operator=(WaterSurfaceParameters const&);
            WaterSurfaceParameters(WaterSurfaceParameters const&);
            WaterSurfaceParameters();
        };

        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk4af7d8;
            ::ll::UntypedStorage<4, 12> mUnk651acb;
            ::ll::UntypedStorage<8, 80> mUnk1fc556;
            ::ll::UntypedStorage<4, 48> mUnk6c9c08;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings();

            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV1::WaterSettings const&);

            MCNAPI ::WaterConfig::WaterConfigSettingsV1::WaterSettings&
            operator=(::WaterConfig::WaterConfigSettingsV1::WaterSettings&&);

            MCNAPI ~WaterSettings();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor();

            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV1::WaterSettings const&);
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
        ::ll::UntypedStorage<8, 32>  mUnkfd5f6f;
        ::ll::UntypedStorage<8, 176> mUnkde299c;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV1& operator=(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV1();
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

    struct WaterConfigSettingsV2 {
    public:
        // WaterConfigSettingsV2 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV2 inner types define
        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk3e3b1d;
            ::ll::UntypedStorage<4, 12> mUnkdfc572;
            ::ll::UntypedStorage<8, 80> mUnk3eafd1;
            ::ll::UntypedStorage<4, 44> mUnk29556d;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings();

            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV2::WaterSettings const&);

            MCNAPI ::WaterConfig::WaterConfigSettingsV2::WaterSettings&
            operator=(::WaterConfig::WaterConfigSettingsV2::WaterSettings&&);

            MCNAPI ::WaterConfig::WaterConfigSettingsV2::WaterSettings&
            operator=(::WaterConfig::WaterConfigSettingsV2::WaterSettings const&);

            MCNAPI ~WaterSettings();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor();

            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV2::WaterSettings const&);
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
        ::ll::UntypedStorage<8, 32>  mUnk36eb1b;
        ::ll::UntypedStorage<8, 176> mUnk204156;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV2(WaterConfigSettingsV2 const&);
        WaterConfigSettingsV2();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI WaterConfigSettingsV2(::WaterConfig::WaterConfigSettingsV2&&);

        MCNAPI ::WaterConfig::WaterConfigSettingsV2& operator=(::WaterConfig::WaterConfigSettingsV2 const&);

        MCNAPI ::WaterConfig::WaterConfigSettingsV2& operator=(::WaterConfig::WaterConfigSettingsV2&&);

        MCNAPI ~WaterConfigSettingsV2();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV2&&);
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
    ::ll::UntypedStorage<8, 32>  mUnk1de33d;
    ::ll::UntypedStorage<8, 208> mUnkb2bbcd;
    ::ll::UntypedStorage<8, 64>  mUnk33e946;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfig& operator=(WaterConfig const&);
    WaterConfig(WaterConfig const&);
    WaterConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WaterConfig() /*override*/;

    // vIndex: 2
    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    // vIndex: 1
    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    // vIndex: 3
    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WaterConfig(::IMinecraftEventing& eventing);

    MCNAPI ::mce::framebuilder::CausticsParameters getCausticsParameters() const;

    MCNAPI void loadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void unloadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI bool validateAndSetCausticsTexture();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindWaterParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY();
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
