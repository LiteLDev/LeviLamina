#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/external/render_dragon/frame_renderer/modules/Type.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
class ResourcePackManager;
class SemVersionConstant;
struct LocalPlayer;
namespace Editor::Services { struct ClientDataTransferServiceProvider; }
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
                ColorGradingDescription(ColorGradingDescription const&);
                ColorGradingDescription();

            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGradingDescription&
                operator=(::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::
                              ColorGradingDescription const&);

                MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGradingDescription&
                operator=(
                    ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGradingDescription&&
                );
                // NOLINTEND

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
            // member functions
            // NOLINTBEGIN
            MCNAPI ColorGradingSettings();

            MCNAPI ColorGradingSettings(::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings const&);

            MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings&
            operator=(::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings const&);

            MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings&
            operator=(::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings&&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor();

            MCNAPI void* $ctor(::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings const&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk4e7c4c;
        ::ll::UntypedStorage<8, 232> mUnk285f2d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV0& operator=(ColorGradingParametersSrcV0 const&);
        ColorGradingParametersSrcV0(ColorGradingParametersSrcV0 const&);
        ColorGradingParametersSrcV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ColorGradingParametersSrcV0();
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
            // member functions
            // NOLINTBEGIN
            MCNAPI ColorGradingSettings();

            MCNAPI ColorGradingSettings(::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings const&);

            MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings&
            operator=(::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings const&);

            MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings&
            operator=(::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings&&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor();

            MCNAPI void* $ctor(::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings const&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnkcb5588;
        ::ll::UntypedStorage<8, 248> mUnka408d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ColorGradingParametersSrcV1(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);

        MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1&
        operator=(::ColorGraderConfig::ColorGradingParametersSrcV1&&);

        MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1&
        operator=(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);

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
    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters
    getColorGradingParameters(::ColorGraderConfig::ColorGradingParametersSrcV1 const& settings) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fillDefaultTemperatureParameters(
        ::ColorGraderConfig::ColorGradingParametersSrcV0 const& src,
        ::ColorGraderConfig::ColorGradingParametersSrcV1&       dst
    );

    MCNAPI static void bindColorGradingParameters(::cereal::ReflectionCtx& ctx);

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
