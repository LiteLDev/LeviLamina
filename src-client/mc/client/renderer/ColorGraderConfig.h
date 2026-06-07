#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/external/render_dragon/frame_renderer/modules/Tonemapper.h"
#include "mc/external/render_dragon/frame_renderer/modules/Type.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct ColorGradingParameters; }
// clang-format on

class ColorGraderConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // ColorGraderConfig inner types declare
    // clang-format off
    struct ColorGradingParametersSrcV0;
    struct ColorGradingParametersSrcV1;
    // clang-format on

    // ColorGraderConfig inner types define
    struct ColorGradingParametersSrcV0 {
    public:
        // ColorGradingParametersSrcV0 inner types declare
        // clang-format off
        struct ColorGradingSettings;
        // clang-format on

        // ColorGradingParametersSrcV0 inner types define
        struct ColorGradingSettings {
        public:
            // ColorGradingSettings inner types declare
            // clang-format off
            struct ColorGradingDescription;
            struct Midtones;
            struct Highlights;
            struct Shadows;
            struct ColorGrading;
            struct ToneMapping;
            // clang-format on

            // ColorGradingSettings inner types define
            struct ColorGradingDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk320344;
                // NOLINTEND

            public:
                // prevent constructor by default
                ColorGradingDescription& operator=(ColorGradingDescription const&);
                ColorGradingDescription(ColorGradingDescription const&);
                ColorGradingDescription();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct Midtones {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 12> mUnk833134;
                ::ll::UntypedStorage<4, 12> mUnkf909c6;
                ::ll::UntypedStorage<4, 12> mUnkc5e1ca;
                ::ll::UntypedStorage<4, 12> mUnk2b001c;
                ::ll::UntypedStorage<4, 12> mUnkcbd00f;
                // NOLINTEND

            public:
                // prevent constructor by default
                Midtones& operator=(Midtones const&);
                Midtones(Midtones const&);
                Midtones();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct Highlights {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1>  mUnk55b215;
                ::ll::UntypedStorage<4, 4>  mUnk79d47c;
                ::ll::UntypedStorage<4, 12> mUnkd2d9a1;
                ::ll::UntypedStorage<4, 12> mUnk578ac0;
                ::ll::UntypedStorage<4, 12> mUnk650260;
                ::ll::UntypedStorage<4, 12> mUnkb18549;
                ::ll::UntypedStorage<4, 12> mUnk862a52;
                // NOLINTEND

            public:
                // prevent constructor by default
                Highlights& operator=(Highlights const&);
                Highlights(Highlights const&);
                Highlights();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct Shadows {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1>  mUnkaf678f;
                ::ll::UntypedStorage<4, 4>  mUnke27130;
                ::ll::UntypedStorage<4, 12> mUnk7eb0a2;
                ::ll::UntypedStorage<4, 12> mUnk6afdc1;
                ::ll::UntypedStorage<4, 12> mUnk8529d1;
                ::ll::UntypedStorage<4, 12> mUnkf96ae7;
                ::ll::UntypedStorage<4, 12> mUnk48199c;
                // NOLINTEND

            public:
                // prevent constructor by default
                Shadows& operator=(Shadows const&);
                Shadows(Shadows const&);
                Shadows();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 60> mUnk175cdf;
                ::ll::UntypedStorage<4, 68> mUnke95629;
                ::ll::UntypedStorage<4, 68> mUnkbc8d88;
                // NOLINTEND

            public:
                // prevent constructor by default
                ColorGrading& operator=(ColorGrading const&);
                ColorGrading(ColorGrading const&);
                ColorGrading();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct ToneMapping {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 4> mUnkf7fc1e;
                // NOLINTEND

            public:
                // prevent constructor by default
                ToneMapping& operator=(ToneMapping const&);
                ToneMapping(ToneMapping const&);
                ToneMapping();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32>  mUnk86b00f;
            ::ll::UntypedStorage<4, 196> mUnk795e90;
            ::ll::UntypedStorage<4, 4>   mUnkfbe4a5;
            // NOLINTEND

        public:
            // prevent constructor by default
            ColorGradingSettings& operator=(ColorGradingSettings const&);
            ColorGradingSettings(ColorGradingSettings const&);
            ColorGradingSettings();

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk20c2e5;
        ::ll::UntypedStorage<8, 232> mUnk285f2d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV0& operator=(ColorGradingParametersSrcV0 const&);
        ColorGradingParametersSrcV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ColorGradingParametersSrcV0(::ColorGraderConfig::ColorGradingParametersSrcV0 const&);

        MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV0&
        operator=(::ColorGraderConfig::ColorGradingParametersSrcV0&&);

        MCNAPI ~ColorGradingParametersSrcV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ColorGraderConfig::ColorGradingParametersSrcV0 const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ColorGradingParametersSrcV1 {
    public:
        // ColorGradingParametersSrcV1 inner types declare
        // clang-format off
        struct ColorGradingSettings;
        // clang-format on

        // ColorGradingParametersSrcV1 inner types define
        struct ColorGradingSettings {
        public:
            // ColorGradingSettings inner types declare
            // clang-format off
            struct Temperature;
            struct ColorGrading;
            // clang-format on

            // ColorGradingSettings inner types define
            struct Temperature {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnk702a21;
                ::ll::UntypedStorage<4, 4> mUnkaa2f73;
                ::ll::UntypedStorage<1, 1> mUnk4f19d4;
                // NOLINTEND

            public:
                // prevent constructor by default
                Temperature& operator=(Temperature const&);
                Temperature(Temperature const&);
                Temperature();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND

            public:
                // static variables
                // NOLINTBEGIN
                MCNAPI static bool& DEFAULT_ENABLED();

                MCNAPI static float& DEFAULT_TEMPERATURE();

                MCNAPI static ::dragon::framerenderer::modules::TemperatureGrading::Type& DEFAULT_TYPE();
                // NOLINTEND
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 60> mUnkcf6438;
                ::ll::UntypedStorage<4, 68> mUnk94a91a;
                ::ll::UntypedStorage<4, 68> mUnkfe8f18;
                ::ll::UntypedStorage<4, 12> mUnk67bf8c;
                // NOLINTEND

            public:
                // prevent constructor by default
                ColorGrading& operator=(ColorGrading const&);
                ColorGrading(ColorGrading const&);
                ColorGrading();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32>  mUnkbcafa9;
            ::ll::UntypedStorage<4, 208> mUnkf0ef1e;
            ::ll::UntypedStorage<4, 4>   mUnk901c49;
            // NOLINTEND

        public:
            // prevent constructor by default
            ColorGradingSettings& operator=(ColorGradingSettings const&);
            ColorGradingSettings(ColorGradingSettings const&);
            ColorGradingSettings();

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk492f52;
        ::ll::UntypedStorage<8, 248> mUnka408d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV1& operator=(ColorGradingParametersSrcV1 const&);
        ColorGradingParametersSrcV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ColorGradingParametersSrcV1(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);

        MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1&
        operator=(::ColorGraderConfig::ColorGradingParametersSrcV1&&);

        MCNAPI ~ColorGradingParametersSrcV1();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);
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
    ::ll::UntypedStorage<8, 280> mUnkc72deb;
    ::ll::UntypedStorage<8, 64>  mUnkf20260;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGraderConfig& operator=(ColorGraderConfig const&);
    ColorGraderConfig(ColorGraderConfig const&);
    ColorGraderConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ColorGraderConfig() /*override*/;

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
    MCNAPI explicit ColorGraderConfig(::IMinecraftEventing& eventing);

    MCNAPI bool addNewColorGradingConfigSetting(
        ::HashedString const&                             identifier,
        ::ColorGraderConfig::ColorGradingParametersSrcV1& inColorGradingSettings
    );

    MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1 const&
    findColorGradingSettings(::HashedString const& identifier) const;

    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters getColorGradingParameters() const;

    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters
    getColorGradingParameters(::HashedString colorGradingIdentifier) const;

    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters
    getColorGradingParameters(::ColorGraderConfig::ColorGradingParametersSrcV1 const& settings) const;

    MCNAPI ::dragon::framerenderer::modules::Tonemapper getTonemapper() const;

    MCNAPI bool setColorGradingConfigSettings(
        ::HashedString const&                                   identifier,
        ::ColorGraderConfig::ColorGradingParametersSrcV1 const& inColorGradingSettings
    );

    MCNAPI void
    setDefaultColorGradingSettings(::ColorGraderConfig::ColorGradingParametersSrcV1 const& inColorGradingSettings);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fillDefaultTemperatureParameters(
        ::ColorGraderConfig::ColorGradingParametersSrcV0 const& dst,
        ::ColorGraderConfig::ColorGradingParametersSrcV1&
    );

    MCNAPI static void bindColorGradingParameters(::cereal::ReflectionCtx& ctx);

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

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(
    ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings const&,
    ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings const&
);

MCNAPI bool operator==(
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Highlights const&,
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Highlights const&
);

MCNAPI bool operator==(
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Midtones const&,
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Midtones const&
);

MCNAPI bool operator==(
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Shadows const&,
    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Shadows const&
);
// NOLINTEND
