#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class ResourcePackManager;
class SemVersion;
namespace Editor::Services { struct ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShadowStylizationConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ShadowStylizationConfig inner types declare
    // clang-format off
    struct ShadowStylizationConfigSettings;
    // clang-format on

    // ShadowStylizationConfig inner types define
    struct ShadowStylizationConfigSettings {
    public:
        // ShadowStylizationConfigSettings inner types declare
        // clang-format off
        struct ShadowStylizationSettings;
        // clang-format on

        // ShadowStylizationConfigSettings inner types define
        struct ShadowStylizationSettings {
        public:
            // ShadowStylizationSettings inner types define
            enum class ShadowStyle : int {
                SoftShadows  = 0,
                TexelShadows = 1,
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk1534d7;
            ::ll::UntypedStorage<4, 4> mUnkbdbba3;
            // NOLINTEND

        public:
            // prevent constructor by default
            ShadowStylizationSettings& operator=(ShadowStylizationSettings const&);
            ShadowStylizationSettings(ShadowStylizationSettings const&);
            ShadowStylizationSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8de834;
        ::ll::UntypedStorage<4, 8>  mUnk27dc97;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowStylizationConfigSettings& operator=(ShadowStylizationConfigSettings const&);
        ShadowStylizationConfigSettings(ShadowStylizationConfigSettings const&);
        ShadowStylizationConfigSettings();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ShadowStylizationConfigSettings();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk8ed45b;
    ::ll::UntypedStorage<8, 24> mUnk6298c2;
    ::ll::UntypedStorage<8, 8>  mUnkfb8df3;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowStylizationConfig& operator=(ShadowStylizationConfig const&);
    ShadowStylizationConfig(ShadowStylizationConfig const&);
    ShadowStylizationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShadowStylizationConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);

    MCNAPI ::Puv::LoadResultAny
    loadFromString(::cereal::ReflectionCtx const& ctx, ::std::string const& shadowStylizationJson);

    MCNAPI ::std::optional<::std::string> serializeToString(::cereal::ReflectionCtx const& ctx) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindShadowStylizationParameters(::cereal::ReflectionCtx& ctx);

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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
