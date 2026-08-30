#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerInfo;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
namespace Core { class Path; }
// clang-format on

class ActorAnimationControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                  mResourceLoadTimeStamp;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mActorAnimationControllerLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ActorAnimationControllerInfo>>>
                                                                                 mAnimationControllers;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>> mResourceLoadManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorAnimationControllerGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerGroup();

    MCAPI void _loadActorAnimationController(
        ::std::string const&      fileData,
        ::Core::Path const&       filenameWithExtension,
        ::MinEngineVersion const& minEngineVersion,
        ::CurrentCmdVersion const packCommandVersion
    );

    MCAPI ::std::shared_ptr<::ActorAnimationControllerInfo> getActorAnimationControllerInfo(::HashedString const& name);

#ifdef LL_PLAT_C
    MCAPI void loadActorAnimationControllersAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager
    );
#endif

    MCAPI void loadActorAnimationControllersSync(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
