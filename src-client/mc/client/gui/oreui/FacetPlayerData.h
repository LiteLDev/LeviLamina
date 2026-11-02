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
    ::ll::TypedStorage<8, 176, ::OreUI::AllowListProfileImage>                       mProfileImage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Realms::Stories::FetchStatus getFetchProfileStatus() const;

    MCNAPI ::std::string const& getGamerTag() const;

    MCNAPI bool getHasAccepted() const;

    MCNAPI bool getHasOptedIn() const;

    MCNAPI bool getIsPlayingOnRealm() const;

    MCNAPI int64 getLastSeenTime() const;

    MCNAPI bool getOnlineStatus() const;

    MCNAPI ::OreUI::AllowListProfileImage const& getProfileImage() const;

    MCNAPI ::Realms::Stories::RealmStoriesPlayerRole getRealmStoriesRole() const;

    MCNAPI ::Realms::PlayerRole getRealmsRole() const;

    MCNAPI ::std::string const& getXuid() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[29]> NAME();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
