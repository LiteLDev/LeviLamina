#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ConnectionType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
namespace Social { struct User; }
// clang-format on

namespace OreUI {

struct WorldPlayerInfoBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mIdString;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                             mPlayerUUID;
    ::ll::TypedStorage<8, 32, ::std::string>                           mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>                           mPlatformOnlineId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mPlayerName;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>         mProfileImage;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                  mPlatformImage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mProfileSubscription;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>> mPermissionLevel;
    ::ll::TypedStorage<1, 1, ::OreUI::ConnectionType>                  mConnectionType;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                          mPlatform;
    ::ll::TypedStorage<1, 1, bool>                                     mIsHost;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayerInfoBindings& operator=(WorldPlayerInfoBindings const&);
    WorldPlayerInfoBindings(WorldPlayerInfoBindings const&);
    WorldPlayerInfoBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayerInfoBindings(::OreUI::WorldPlayerInfoBindings&&);

    MCAPI WorldPlayerInfoBindings(
        ::mce::UUID                              uuid,
        ::PlayerListEntry const*                 playerDetails,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI WorldPlayerInfoBindings(
        ::mce::UUID                              uuid,
        ::LocalPlayer const*                     localPlayer,
        ::std::shared_ptr<::Social::User>        user,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel,
        bool                                     isHost,
        ::BuildPlatform                          platform
    );

    MCFOLD ::std::string const& getActiveProfileImage() const;

    MCAPI ::OreUI::ConnectionType getConnectionType() const;

    MCAPI ~WorldPlayerInfoBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::WorldPlayerInfoBindings&&);

    MCAPI void* $ctor(
        ::mce::UUID                              uuid,
        ::PlayerListEntry const*                 playerDetails,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI void* $ctor(
        ::mce::UUID                              uuid,
        ::LocalPlayer const*                     localPlayer,
        ::std::shared_ptr<::Social::User>        user,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel,
        bool                                     isHost,
        ::BuildPlatform                          platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
