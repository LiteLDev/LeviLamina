#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
namespace Bedrock::PubSub { class Subscription; }
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct XboxLiveUserProfileData; }
namespace World { struct FriendServerWorldList; }
// clang-format on

namespace Social {

class FriendList : public ::std::enable_shared_from_this<::Social::FriendList> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk94a285;
    ::ll::UntypedStorage<8, 24>  mUnk3dec99;
    ::ll::UntypedStorage<8, 24>  mUnk97d7db;
    ::ll::UntypedStorage<4, 4>   mUnka169f6;
    ::ll::UntypedStorage<4, 4>   mUnkbdca0c;
    ::ll::UntypedStorage<8, 24>  mUnk6cd57a;
    ::ll::UntypedStorage<8, 8>   mUnka14ae8;
    ::ll::UntypedStorage<8, 16>  mUnkd0321b;
    ::ll::UntypedStorage<8, 24>  mUnk60efda;
    ::ll::UntypedStorage<8, 64>  mUnkaa59aa;
    ::ll::UntypedStorage<8, 64>  mUnk3cfb17;
    ::ll::UntypedStorage<8, 8>   mUnkef0739;
    ::ll::UntypedStorage<1, 1>   mUnk2af42c;
    ::ll::UntypedStorage<8, 8>   mUnkbdb5c3;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendList& operator=(FriendList const&);
    FriendList(FriendList const&);
    FriendList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendList(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager,
        ::World::FriendServerWorldList&                       friendServerWorldList,
        ::std::vector<::Social::MultiplayerServiceIdentifier> platformMultiplayerServiceIds,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                                                  getMultiplayerServiceManager,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> getContentCatalogService
    );

    MCNAPI void _addNewFriend(::Social::XboxLiveUserProfileData const& xboxUser);

    MCNAPI void _addOrUpdateXblFriends(::std::vector<::Social::XboxLiveUserProfileData const*> const& xblFriendsList);

    MCNAPI void _eraseRemovedXblFriends(::std::vector<::Social::XboxLiveUserProfileData const*> const& xblFriendsList);

    MCNAPI void _updateData();

    MCNAPI ::Bedrock::PubSub::Subscription registerChangeListener(::std::function<void()> callback);

    MCNAPI ~FriendList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager,
        ::World::FriendServerWorldList&                       friendServerWorldList,
        ::std::vector<::Social::MultiplayerServiceIdentifier> platformMultiplayerServiceIds,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                                                  getMultiplayerServiceManager,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> getContentCatalogService
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
