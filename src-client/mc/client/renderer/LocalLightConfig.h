#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
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
        LocalLightConfigSettingsV0& operator=(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0();
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
    LocalLightConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalLightConfig() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalizeResources();
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
};
