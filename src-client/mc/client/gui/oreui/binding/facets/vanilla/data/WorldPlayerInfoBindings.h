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
};

} // namespace OreUI
