#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/realms/Player.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/RealmStoriesPlayerRole.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, ::Realms::Stories::Player>                            mPlayer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>                       mProfileImage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Realms::Stories::FetchStatus getFetchProfileStatus() const;

    MCAPI ::std::string const& getGamerTag() const;

    MCAPI bool getHasAccepted() const;

    MCAPI bool getHasOptedIn() const;

    MCAPI bool getIsPlayingOnRealm() const;

    MCFOLD int64 getLastSeenTime() const;

    MCAPI bool getOnlineStatus() const;

    MCAPI ::OreUI::AllowListProfileImage const& getProfileImage() const;

    MCAPI ::Realms::Stories::RealmStoriesPlayerRole getRealmStoriesRole() const;

    MCFOLD ::Realms::PlayerRole getRealmsRole() const;

    MCFOLD ::std::string const& getXuid() const;
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
