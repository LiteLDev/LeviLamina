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
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
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
        HorizonBlendKeyFrames& operator=(HorizonBlendKeyFrames const&);
        HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);
        HorizonBlendKeyFrames();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~HorizonBlendKeyFrames();
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
        AtmosphericScatteringSettingsV0& operator=(AtmosphericScatteringSettingsV0 const&);
        AtmosphericScatteringSettingsV0(AtmosphericScatteringSettingsV0 const&);
        AtmosphericScatteringSettingsV0();
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
        AtmosphericScatteringSettingsV1& operator=(AtmosphericScatteringSettingsV1 const&);
        AtmosphericScatteringSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV1(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI ~AtmosphericScatteringSettingsV1();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);
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
        AtmosphericScatteringConfigSettingsV0(AtmosphericScatteringConfigSettingsV0 const&);
        AtmosphericScatteringConfigSettingsV0();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
    virtual ~AtmosphericScattering() /*override*/ = default;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&,
        ::ResourcePackManager&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>
    ) /*override*/;

    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&,
        ::std::string const&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>
    ) /*override*/;

    virtual void _setDefaultIdentifierImpl(::HashedString const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters calculateAtmosphericScatteringParameters(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& atmosphereSettings,
        float                                                                 timeOfDay
    ) const;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
