#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { struct ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct AtmosphericScatteringParameters; }
// clang-format on

class AtmosphericScattering : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // AtmosphericScattering inner types declare
    // clang-format off
    struct AtmosphericScatteringConfigSettings;
    // clang-format on

    // AtmosphericScattering inner types define
    struct AtmosphericScatteringConfigSettings {
    public:
        // AtmosphericScatteringConfigSettings inner types declare
        // clang-format off
        struct AtmosphericScatteringSettings;
        // clang-format on

        // AtmosphericScatteringConfigSettings inner types define
        struct AtmosphericScatteringSettings {
        public:
            // AtmosphericScatteringSettings inner types declare
            // clang-format off
            struct AtmosphericScatteringDescription;
            struct HorizonBlendKeyFrames;
            // clang-format on

            // AtmosphericScatteringSettings inner types define
            struct AtmosphericScatteringDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk81c476;
                // NOLINTEND

            public:
                // prevent constructor by default
                AtmosphericScatteringDescription& operator=(AtmosphericScatteringDescription const&);
                AtmosphericScatteringDescription(AtmosphericScatteringDescription const&);
                AtmosphericScatteringDescription();

            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings::
                    AtmosphericScatteringDescription&
                    operator=(::AtmosphericScattering::AtmosphericScatteringConfigSettings::
                                  AtmosphericScatteringSettings::AtmosphericScatteringDescription&&);

                MCNAPI ~AtmosphericScatteringDescription();
                // NOLINTEND

            public:
                // destructor thunk
                // NOLINTBEGIN
                MCNAPI void $dtor();
                // NOLINTEND
            };

            struct HorizonBlendKeyFrames {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnkb4ef9e;
                ::ll::UntypedStorage<8, 32> mUnkd26625;
                ::ll::UntypedStorage<8, 32> mUnk864f41;
                ::ll::UntypedStorage<8, 32> mUnk6411cb;
                // NOLINTEND

            public:
                // prevent constructor by default
                HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);

            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI HorizonBlendKeyFrames();

                MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings::
                    HorizonBlendKeyFrames&
                    operator=(::AtmosphericScattering::AtmosphericScatteringConfigSettings::
                                  AtmosphericScatteringSettings::HorizonBlendKeyFrames&&);

                MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings::
                    HorizonBlendKeyFrames&
                    operator=(::AtmosphericScattering::AtmosphericScatteringConfigSettings::
                                  AtmosphericScatteringSettings::HorizonBlendKeyFrames const&);

                MCNAPI ~HorizonBlendKeyFrames();
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
            ::ll::UntypedStorage<8, 32>  mUnkfe09bd;
            ::ll::UntypedStorage<8, 128> mUnk868503;
            ::ll::UntypedStorage<8, 32>  mUnk32e0b1;
            ::ll::UntypedStorage<8, 32>  mUnk5441c4;
            ::ll::UntypedStorage<8, 32>  mUnk346ebc;
            ::ll::UntypedStorage<8, 32>  mUnk54b71d;
            ::ll::UntypedStorage<8, 32>  mUnkf204ad;
            ::ll::UntypedStorage<8, 32>  mUnk675bb4;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI AtmosphericScatteringSettings();

            MCNAPI AtmosphericScatteringSettings(
                ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings&&
            );

            MCNAPI AtmosphericScatteringSettings(
                ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings const&
            );

            MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings&
            operator=(::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings&&);

            MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings&
            operator=(
                ::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings const&
            );

            MCNAPI ~AtmosphericScatteringSettings();
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

            MCNAPI void*
            $ctor(::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings&&);

            MCNAPI void*
            $ctor(::AtmosphericScattering::AtmosphericScatteringConfigSettings::AtmosphericScatteringSettings const&);
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
        ::ll::UntypedStorage<8, 32>  mUnk9ac781;
        ::ll::UntypedStorage<8, 352> mUnk9cdae9;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringConfigSettings& operator=(AtmosphericScatteringConfigSettings const&);
        AtmosphericScatteringConfigSettings(AtmosphericScatteringConfigSettings const&);
        AtmosphericScatteringConfigSettings();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettings&
        operator=(::AtmosphericScattering::AtmosphericScatteringConfigSettings&&);

        MCNAPI ~AtmosphericScatteringConfigSettings();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384> mUnkc8ba8a;
    ::ll::UntypedStorage<8, 64>  mUnk16db9b;
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScattering& operator=(AtmosphericScattering const&);
    AtmosphericScattering(AtmosphericScattering const&);
    AtmosphericScattering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AtmosphericScattering() /*override*/;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               atmosphereJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters calculateAtmosphericScatteringParameters(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettings const& atmosphereSettings,
        float                                                               timeOfDay
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindAtmosphericParameters(::cereal::ReflectionCtx& ctx);

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
        ::std::string const&                               atmosphereJson,
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
