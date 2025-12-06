#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MinEngineVersion;
class RenderControllerInfo;
class RenderControllerPtr;
class TaskResult;
struct ResourceLoadManager;
struct ResourcePackManager;
// clang-format on

class RenderControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb8423f;
    ::ll::UntypedStorage<8, 64> mUnkfbd6c7;
    ::ll::UntypedStorage<8, 80> mUnk14af44;
    ::ll::UntypedStorage<8, 24> mUnk5d2735;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerGroup& operator=(RenderControllerGroup const&);
    RenderControllerGroup(RenderControllerGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderControllerGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerGroup();

    MCNAPI void _loadRenderController(
        ::std::string const&      fileData,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      filenameWithExtension
    );

    MCNAPI ::TaskResult _tryLoadRenderControllers(::ResourcePackManager& resourcePackManager);

    MCNAPI ::RenderControllerPtr getRenderController(::HashedString const& name);

    MCNAPI ::std::shared_ptr<::RenderControllerInfo> getRenderControllerInfo(::HashedString const& name);

    MCNAPI void loadRenderControllers(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager
    );
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
