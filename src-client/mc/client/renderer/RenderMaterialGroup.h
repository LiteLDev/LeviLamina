#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/renderer/RenderMaterialGroupBase.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/renderer/SamplerGroupCache.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ResourceLoadManager;
class ResourcePackManager;
struct PackIdVersion;
namespace mce { class RenderMaterialInfo; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace mce {

class RenderMaterialGroup : public ::AppPlatformListener, public ::mce::RenderMaterialGroupBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::mce::RenderMaterialInfo>>>
                                                                                         mMaterials;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::PackIdVersion>>> mLoadedMaterialFiles;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                        mBoundList;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                               mAsyncLoadLock;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                        mRestartAsyncLoad;
    ::ll::TypedStorage<8, 64, ::mce::SamplerGroupCache>                                  mSamplerGroupCache;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                                     mResourcePackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>>         mResourceLoadManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::mce::ShaderGroup>>            mShaderGroup;
    // NOLINTEND

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
    MCAPI RenderMaterialGroup();

    MCAPI bool
    _loadList(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup, ::ResourcePackManager& resourcePackManager);

    MCAPI bool loadList(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup>       shaderGroup,
        ::ResourceLocation const&                            listPath,
        ::ResourcePackManager&                               resourcePacks,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        bool                                                 cleanReload
    );

    MCAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::RenderMaterialGroup& common();

    MCAPI static ::mce::RenderMaterialGroup& switchable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onAppResumed();

    MCAPI ::mce::RenderMaterialInfo& $getMaterialInfo(::HashedString const& name);

    MCAPI void $clearMaterial(::HashedString const& name);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRenderMaterialGroupBase();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};

} // namespace mce
