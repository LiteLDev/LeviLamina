#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/RealmStoriesPlayerRole.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { struct FacetStateManager; }
namespace Realms::Stories { struct Player; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Realms::Stories::Player&>                             mPlayer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>                       mProfileImage;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetPlayerData& operator=(FacetPlayerData const&);
    FacetPlayerData(FacetPlayerData const&);
    FacetPlayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetPlayerData(::OreUI::RealmsStories::FacetPlayerData&&);

    MCAPI ::Realms::Stories::FetchStatus getFetchProfileStatus() const;

    MCAPI ::std::string const& getGamerTag() const;

    MCAPI bool getHasAccepted() const;

    MCAPI bool getHasOptedIn() const;

    MCAPI bool getIsPlayingOnRealm() const;

    MCAPI int64 getLastSeenTime() const;

    MCAPI bool getOnlineStatus() const;

    MCFOLD ::OreUI::AllowListProfileImage const& getProfileImage() const;

    MCAPI ::Realms::Stories::RealmStoriesPlayerRole getRealmStoriesRole() const;

    MCAPI ::Realms::PlayerRole getRealmsRole() const;

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
    MCAPI void* $ctor(::OreUI::RealmsStories::FacetPlayerData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
