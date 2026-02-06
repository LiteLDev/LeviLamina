#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/services/clubs/ActivityFeed.h"
#include "mc/client/services/clubs/ClubModel.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Clubs { struct FeedItem; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

class ClubsBaseController : public ::MainMenuScreenController {
public:
    // ClubsBaseController inner types declare
    // clang-format off
    struct FeedPlayerInfo;
    struct LinkedPlatformUserProfileData;
    // clang-format on

    // ClubsBaseController inner types define
    struct FeedPlayerInfo {};

    struct LinkedPlatformUserProfileData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>> mScrollToControlCallback;
    ::ll::TypedStorage<8, 64, ::Clubs::ActivityFeed>                             mFeed;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>                               mHasScreenshotLoaded;
    ::ll::TypedStorage<8, 128, ::Clubs::ClubModel>                               mClub;
    ::ll::TypedStorage<1, 1, bool>                                               mFeedLoading;
    ::ll::TypedStorage<1, 1, bool>                                               mFeedEmpty;
    ::ll::TypedStorage<1, 1, bool>                                               mShowLoading;
    ::ll::TypedStorage<1, 1, bool>                                               mCanLike;
    ::ll::TypedStorage<1, 1, bool>                                               mDirty;
    ::ll::TypedStorage<1, 1, bool>                                               mPlayerListInitialized;
    ::ll::TypedStorage<1, 1, bool>                                               mClubsInfoInitialized;
    ::ll::TypedStorage<1, 1, bool>                                               mUseLinkedAccounts;
    ::ll::TypedStorage<1, 1, bool>                                               mLoadingLinkedFriends;
    ::ll::TypedStorage<1, 1, bool>                                               mJustPosted;
    ::ll::TypedStorage<4, 4, int>                                                mNumFriendsToLoad;
    ::ll::TypedStorage<4, 4, ::std::atomic<::ui::DirtyFlag>>                     mNextTickDirtyFlag;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                       mAsyncPlayerProfileAccessMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>               mXuidsInFeed;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Core::PathBuffer<::std::string>>>
        mScreenshotPathsInFeed;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ClubsBaseController::FeedPlayerInfo>> mPlayerList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::XboxLiveUserProfileData>>
        mAsyncPlayerProfiles;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::XboxLiveUserProfileData>> mPlayerProfiles;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ClubsBaseController::LinkedPlatformUserProfileData>>
                                                           mLinkedPlayerProfiles;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mScreenshotLoadedMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mScreenshotPathMutex;
    ::ll::TypedStorage<8, 8, ::Realms::World const&>       mWorld;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsBaseController& operator=(ClubsBaseController const&);
    ClubsBaseController(ClubsBaseController const&);
    ClubsBaseController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsBaseController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::Clubs::FeedItem& _getFeedItem(int const i);

    virtual int _getFeedSize() const;

    virtual void _updateFeed();

    virtual void _populateListsFromFeed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClubsBaseController(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World const& world);

    MCAPI void _deleteFeedItem(::Clubs::FeedItem feedItem, ::Realms::RealmId realmId, ::std::string const& clubId);

    MCAPI void _findLinkedAccount(::std::string xuid, ::std::string uuid);

    MCAPI void _loadScreenshotForItem(::Clubs::FeedItem& feedItem, int index);

    MCAPI void _markMostRecentOwnPostViewed();

    MCAPI void _populatePlayerList();

    MCAPI void _requestLinkedAccounts();

    MCAPI void _requestPlayerProfiles();

    MCAPI void _retrieveLinkedAccountInfo(::std::string xuid, ::std::string uuid, ::std::string gamerTag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World const& world);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::Clubs::FeedItem& $_getFeedItem(int const i);

    MCAPI int $_getFeedSize() const;

    MCAPI void $_updateFeed();

    MCAPI void $_populateListsFromFeed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
