#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/util/cereal_helpers/TimeKeyframes.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace SharedTypes { struct Color255RGB; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct AtmosphericScatteringParameters; }
// clang-format on

class AtmosphericScattering : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // AtmosphericScattering inner types declare
    // clang-format off
    struct AtmosphericScatteringDescription;
    struct HorizonBlendKeyFrames;
    struct AtmosphericScatteringSettingsV0;
    struct AtmosphericScatteringSettingsV1;
    template<int T0, int T1, int T2> struct AtmosphericScatteringConfigSettingsBase;
    struct AtmosphericScatteringConfigSettingsV0;
    struct AtmosphericScatteringConfigSettingsV1;
    // clang-format on

    // AtmosphericScattering inner types define
    struct AtmosphericScatteringDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk52a585;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringDescription& operator=(AtmosphericScatteringDescription const&);
        AtmosphericScatteringDescription(AtmosphericScatteringDescription const&);
        AtmosphericScatteringDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AtmosphericScatteringDescription();
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

    struct HorizonBlendKeyFrames {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkc4a38e;
        ::ll::UntypedStorage<8, 40> mUnk709e9b;
        ::ll::UntypedStorage<8, 40> mUnk38b4c9;
        ::ll::UntypedStorage<8, 40> mUnk8c93e7;
        // NOLINTEND

    public:
        // prevent constructor by default
        HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);
        HorizonBlendKeyFrames();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::AtmosphericScattering::HorizonBlendKeyFrames&
        operator=(::AtmosphericScattering::HorizonBlendKeyFrames&&);

        MCNAPI ::AtmosphericScattering::HorizonBlendKeyFrames&
        operator=(::AtmosphericScattering::HorizonBlendKeyFrames const&);

        MCNAPI ~HorizonBlendKeyFrames();
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

    struct AtmosphericScatteringSettingsV0 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>  mUnkaf0a30;
        ::ll::UntypedStorage<8, 168> mUnk33b0b8;
        ::ll::UntypedStorage<8, 40>  mUnk35cc9c;
        ::ll::UntypedStorage<8, 40>  mUnkc80dc6;
        ::ll::UntypedStorage<8, 40>  mUnkee9ad5;
        ::ll::UntypedStorage<8, 40>  mUnk221ee7;
        ::ll::UntypedStorage<8, 40>  mUnkcc3669;
        ::ll::UntypedStorage<8, 40>  mUnk68e5c9;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV0(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI AtmosphericScatteringSettingsV0(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV0&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV0&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI ~AtmosphericScatteringSettingsV0();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringSettingsV1 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk454090;
        ::ll::UntypedStorage<8, 168> mUnk7085e2;
        ::ll::UntypedStorage<8, 40>  mUnka90ed5;
        ::ll::UntypedStorage<8, 40>  mUnk6c3bef;
        ::ll::UntypedStorage<8, 40>  mUnk54e796;
        ::ll::UntypedStorage<8, 40>  mUnk2eb184;
        ::ll::UntypedStorage<8, 40>  mUnk5dbb83;
        ::ll::UntypedStorage<8, 40>  mUnk32817d;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV1(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI AtmosphericScatteringSettingsV1(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV1&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV1&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI ~AtmosphericScatteringSettingsV1();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    template <int T0, int T1, int T2>
    struct AtmosphericScatteringConfigSettingsBase {};

    struct AtmosphericScatteringConfigSettingsV0
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<1, 21, 40> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 456> mUnk2263b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringConfigSettingsV0& operator=(AtmosphericScatteringConfigSettingsV0 const&);
        AtmosphericScatteringConfigSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        AtmosphericScatteringConfigSettingsV0(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV0 const&);

        MCNAPI ~AtmosphericScatteringConfigSettingsV0();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV0 const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringConfigSettingsV1
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<1, 26, 20> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 440> mUnk99308a;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringConfigSettingsV1& operator=(AtmosphericScatteringConfigSettingsV1 const&);
        AtmosphericScatteringConfigSettingsV1(AtmosphericScatteringConfigSettingsV1 const&);
        AtmosphericScatteringConfigSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AtmosphericScatteringConfigSettingsV1();
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
    ::ll::UntypedStorage<8, 472> mUnkfde455;
    ::ll::UntypedStorage<8, 64>  mUnkc7b1be;
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
    MCNAPI bool addNewAtmosphereSetting(
        ::HashedString const&                                           identifier,
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1& inAtmosphereSettings
    );

    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters calculateAtmosphericScatteringParameters(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& atmosphereSettings,
        float                                                                 timeOfDay
    ) const;

    MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const&
    findAtmosphereSettings(::HashedString const& identifier) const;

    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters
    getAtmosphericScatteringParameters(float timeOfDay) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getHorizonBlendMax(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getHorizonBlendMieStart(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getHorizonBlendMin(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getHorizonBlendStart(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getMoonMieStrength(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getRayleighStrength(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, ::SharedTypes::Color255RGB>
    getSkyHorizonColor(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, ::SharedTypes::Color255RGB>
    getSkyZenithColor(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getSunGlareShape(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI ::CerealHelpers::TimeKeyframes<float, float>
    getSunMieStrength(::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& config) const;

    MCNAPI bool setAtmosphereSettings(
        ::HashedString const&                                                 identifier,
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& inAtmosphereSettings
    );

    MCNAPI void setDefaultAtmosphereSettings(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& inAtmosphereSettings
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
