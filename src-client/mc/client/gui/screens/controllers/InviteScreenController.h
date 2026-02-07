#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/EntryType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

class InviteScreenController : public ::MinecraftScreenController {
public:
    // InviteScreenController inner types declare
    // clang-format off
    struct XboxLiveUserEntryData;
    struct PlatformUserEntryData;
    struct LinkedUserEntryData;
    // clang-format on

    // InviteScreenController inner types define
    struct XboxLiveUserEntryData {};

    struct PlatformUserEntryData {};

    struct LinkedUserEntryData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::XboxLiveUserEntryData>> mXboxLiveEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::PlatformUserEntryData>> mPlatformEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::LinkedUserEntryData>>   mLinkedEntries;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mDataRequestExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                      mSelectedXboxCount;
    ::ll::TypedStorage<4, 4, int>                      mSelectedPlatformCount;
    ::ll::TypedStorage<4, 4, int>                      mSelectedLinkedAccountCount;
    ::ll::TypedStorage<4, 4, uint>                     mXboxOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                     mPlatformOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                     mLinkedAccountOnlineOffset;
    ::ll::TypedStorage<4, 24, ::std::array<uint, 6>>   mEntryPages;
    ::ll::TypedStorage<1, 1, bool>                     mDirty;
    ::ll::TypedStorage<1, 1, bool>                     mInRealm;
    ::ll::TypedStorage<1, 1, bool>                     mIsRealmOwner;
    ::ll::TypedStorage<8, 656, ::Realms::World>        mCurrentRealm;
    ::ll::TypedStorage<1, 1, bool>                     mDataRefresh;
    ::ll::TypedStorage<1, 1, bool>                     mIsLoadingFriends;
    ::ll::TypedStorage<4, 4, int>                      mNumFriendsToLoad;
    ::ll::TypedStorage<1, 1, bool>                     mShowLinkedAccounts;
    ::ll::TypedStorage<1, 1, bool>                     mShowPlatformInvites;
    ::ll::TypedStorage<1, 1, bool>                     mUsePagination;
    ::ll::TypedStorage<4, 4, uint>                     mEntriesPerPage;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InviteScreenController() /*override*/;

    virtual void queueTitleNarration() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InviteScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void _addToDataList(::Social::PlatformUserProfileData const& user);

    MCAPI ::EntryType _getEntryTypeFromCollectionName(::std::string const& collectionName) const;

    MCAPI ::std::string _getHoverText(::Social::XboxLiveUserProfileData const* xboxUserProfileData) const;

    MCAPI ::std::string _getLinkedAccountFriendTitleName(int collectionIndex) const;

    MCAPI uint _getTotalPages(::EntryType entryType) const;

    MCAPI uint _getVisibleEntries(::EntryType entryType) const;

    MCAPI ::std::string _getXboxFriendTitleName(int collectionIndex) const;

    MCAPI ::std::string _getXboxLiveDisplayName(::Social::XboxLiveUserProfileData const* xboxUserProfileData) const;

    MCAPI void _refreshLinkedPlatformData(
        ::std::vector<::std::string> const& validXuidsForInviteList,
        ::std::weak_ptr<bool>               weakDataRequestExistenceTracker
    );

    MCAPI void _refreshPlatformFriendsData();

    MCAPI void _refreshRealm();

    MCAPI void _refreshXboxLiveFriendsData();

    MCAPI void _refreshXuidData();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _sortDataList();

    MCAPI void _sortRealmsDataList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $queueTitleNarration();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
