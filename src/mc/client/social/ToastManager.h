#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/IToastManager.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
class ToastMessage;
// clang-format on

class ToastManager : public ::IToastManager,
                     public ::Bedrock::Threading::EnableQueueForMainThread,
                     public ::ResourcePackListener,
                     public ::std::enable_shared_from_this<::ToastManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnke9d210;
    ::ll::UntypedStorage<4, 4>   mUnk358232;
    ::ll::UntypedStorage<8, 24>  mUnk90bfd0;
    ::ll::UntypedStorage<8, 376> mUnke9901d;
    ::ll::UntypedStorage<8, 24>  mUnkc7d542;
    ::ll::UntypedStorage<8, 24>  mUnk991dfa;
    ::ll::UntypedStorage<8, 24>  mUnkb3e856;
    ::ll::UntypedStorage<8, 8>   mUnk325e63;
    ::ll::UntypedStorage<8, 64>  mUnk88e1c9;
    ::ll::UntypedStorage<8, 64>  mUnk71b4c8;
    ::ll::UntypedStorage<1, 1>   mUnk5a71b2;
    ::ll::UntypedStorage<1, 1>   mUnke8ff1a;
    ::ll::UntypedStorage<1, 1>   mUnk731ea6;
    ::ll::UntypedStorage<1, 1>   mUnk1421ff;
    ::ll::UntypedStorage<8, 8>   mUnkea87b6;
    ::ll::UntypedStorage<8, 8>   mUnk734cad;
    ::ll::UntypedStorage<4, 4>   mUnka694e6;
    ::ll::UntypedStorage<8, 8>   mUnk6b8fd9;
    ::ll::UntypedStorage<8, 8>   mUnkef29e2;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastManager& operator=(ToastManager const&);
    ToastManager(ToastManager const&);
    ToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ToastManager() /*override*/ = default;

    // vIndex: 1
    virtual void pushToast(::ToastMessage&&) /*override*/;

    // vIndex: 2
    virtual bool isEditorModeEnabled() const /*override*/;

    // vIndex: 1
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
