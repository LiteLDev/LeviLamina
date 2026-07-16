#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/social/PlatformUserProfileData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Parties { class PartySystem; }
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
    struct XboxLiveUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND
    };

    struct PlatformUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 192, ::Social::PlatformUserProfileData> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                mToggleState;
        // NOLINTEND
    };

    struct LinkedUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mXboxUserProfileData;
        ::ll::TypedStorage<8, 192, ::Social::PlatformUserProfileData>      mPlatformUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::XboxLiveUserEntryData>> mXboxLiveEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::PlatformUserEntryData>> mPlatformEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::LinkedUserEntryData>>   mLinkedEntries;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                            mDataRequestExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedXboxCount;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedPlatformCount;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedLinkedAccountCount;
    ::ll::TypedStorage<4, 4, uint>                                                mXboxOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                mPlatformOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                mLinkedAccountOnlineOffset;
    ::ll::TypedStorage<4, 24, ::std::array<uint, 6>>                              mEntryPages;
    ::ll::TypedStorage<1, 1, bool>                                                mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                mInRealm;
    ::ll::TypedStorage<1, 1, bool>                                                mCanManageRealmMembers;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                   mCurrentRealm;
    ::ll::TypedStorage<1, 1, bool>                                                mDataRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                mIsLoadingFriends;
    ::ll::TypedStorage<4, 4, int>                                                 mNumFriendsToLoad;
    ::ll::TypedStorage<1, 1, bool>                                                mShowLinkedAccounts;
    ::ll::TypedStorage<1, 1, bool>                                                mShowPlatformInvites;
    ::ll::TypedStorage<1, 1, bool>                                                mUsePagination;
    ::ll::TypedStorage<1, 1, bool>                                                mMakePartyInvite;
    ::ll::TypedStorage<4, 4, uint>                                                mEntriesPerPage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>> mPartySystem;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InviteScreenController() /*override*/ = default;

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
    MCAPI InviteScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
