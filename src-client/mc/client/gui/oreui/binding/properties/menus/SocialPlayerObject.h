#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

namespace OreUI {

class SocialPlayerObject : public ::OreUI::PropertyObject<::OreUI::SocialPlayerObject>,
                           public ::OreUI::SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>           mMaybeActorId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>           mMaybeXuid;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>           mMaybePlatformId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mGamerIcon;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>           mPlayingOnServerId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>           mPlayingOnRealmId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SocialPresence>>                  mPresence;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::PartyPresence>>                   mPartyPresence;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mPresenceTitleName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mPresenceMessage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Social::TitleHistory>>                   mTitleHistory;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                     mIsCurrentlyPlaying;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                     mIsInSameGame;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::RelationshipStatus>>                     mFavoriteStatus;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::PlayerPermissionLevel>>> mPermissionLevel;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>>                    mIsBlocked;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>>                    mIsMuted;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Social::RelationToCurrentUser>>          mRelation;
    // NOLINTEND
};

} // namespace OreUI
