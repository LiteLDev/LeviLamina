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
    ::ll::TypedStorage<8, 408, ::Realms::Stories::Player>                            mPlayer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>                       mProfileImage;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetPlayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetPlayerData(
        ::Realms::Stories::Player                             player,
        ::OreUI::AllowListProfileImage const&                 profileImage,
        ::std::weak_ptr<::Realms::Stories::FacetStateManager> provider
    );

    MCAPI ::Realms::Stories::FetchStatus getFetchProfileStatus() const;

    MCAPI ::std::string const& getGamerTag() const;

    MCFOLD bool getHasAccepted() const;

    MCFOLD bool getHasOptedIn() const;

    MCFOLD bool getIsPlayingOnRealm() const;

    MCFOLD int64 getLastSeenTime() const;

    MCAPI bool getOnlineStatus() const;

    MCFOLD ::OreUI::AllowListProfileImage const& getProfileImage() const;

    MCFOLD ::Realms::Stories::RealmStoriesPlayerRole getRealmStoriesRole() const;

    MCFOLD ::Realms::PlayerRole getRealmsRole() const;

    MCFOLD ::std::string const& getXuid() const;

    MCAPI ~FacetPlayerData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Realms::Stories::Player                             player,
        ::OreUI::AllowListProfileImage const&                 profileImage,
        ::std::weak_ptr<::Realms::Stories::FacetStateManager> provider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
