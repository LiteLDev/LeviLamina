#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/renderer/RenderMaterialGroupBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ResourceLoadManager;
class ResourceLocation;
class ResourcePackManager;
namespace mce { class RenderMaterialInfo; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace mce {

class RenderMaterialGroup : public ::AppPlatformListener, public ::mce::RenderMaterialGroupBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk189e7d;
    ::ll::UntypedStorage<8, 16> mUnkc55fff;
    ::ll::UntypedStorage<8, 56> mUnk448005;
    ::ll::UntypedStorage<8, 80> mUnk670274;
    ::ll::UntypedStorage<1, 1>  mUnkce59a6;
    ::ll::UntypedStorage<8, 64> mUnk1a1630;
    ::ll::UntypedStorage<8, 8>  mUnk59a764;
    ::ll::UntypedStorage<8, 24> mUnkd5d876;
    ::ll::UntypedStorage<8, 24> mUnk4eb335;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMaterialGroup& operator=(RenderMaterialGroup const&);
    RenderMaterialGroup(RenderMaterialGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onAppResumed() /*override*/;

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const& name) /*override*/;

    virtual void clearMaterial(::HashedString const& name) /*override*/;

    virtual ~RenderMaterialGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderMaterialGroup();

    MCNAPI bool
    _loadList(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup, ::ResourcePackManager& resourcePackManager);

    MCNAPI bool loadList(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup>       shaderGroup,
        ::ResourceLocation const&                            listPath,
        ::ResourcePackManager&                               resourcePacks,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        bool                                                 cleanReload
    );

    MCNAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::RenderMaterialGroup& common();

    MCNAPI static ::mce::RenderMaterialGroup& switchable();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppResumed();

    MCNAPI ::mce::RenderMaterialInfo& $getMaterialInfo(::HashedString const& name);

    MCNAPI void $clearMaterial(::HashedString const& name);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRenderMaterialGroupBase();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};

} // namespace mce
