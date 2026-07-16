#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
struct PBRFallbackSettings;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PBRFallbackConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PBRFallbackConfig inner types declare
    // clang-format off
    struct PBRFallbackConfigSettings;
    // clang-format on

    // PBRFallbackConfig inner types define
    struct PBRFallbackConfigSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf77385;
        ::ll::UntypedStorage<4, 64> mUnke83bd2;
        // NOLINTEND

    public:
        // prevent constructor by default
        PBRFallbackConfigSettings& operator=(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnkab4791;
    ::ll::UntypedStorage<8, 24> mUnk332196;
    ::ll::UntypedStorage<8, 8>  mUnk3b226f;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfig& operator=(PBRFallbackConfig const&);
    PBRFallbackConfig(PBRFallbackConfig const&);
    PBRFallbackConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PBRFallbackConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PBRFallbackConfig(::IMinecraftEventing& eventing);

    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindPBRFallbackParameters(::cereal::ReflectionCtx& ctx);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
