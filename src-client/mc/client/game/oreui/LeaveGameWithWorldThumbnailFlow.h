#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class ILevelListCache;
class LocalPlayer;
namespace mce { struct ViewportInfo; }
// clang-format on

namespace OreUI {

class LeaveGameWithWorldThumbnailFlow {
public:
    // LeaveGameWithWorldThumbnailFlow inner types declare
    // clang-format off
    struct PendingScreenshot;
    // clang-format on

    // LeaveGameWithWorldThumbnailFlow inner types define
    struct PendingScreenshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnkb16ba9;
        ::ll::UntypedStorage<8, 264> mUnkfad33a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingScreenshot& operator=(PendingScreenshot const&);
        PendingScreenshot(PendingScreenshot const&);
        PendingScreenshot();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk255d2b;
    ::ll::UntypedStorage<8, 40>  mUnkd09dee;
    ::ll::UntypedStorage<8, 296> mUnkab4db3;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveGameWithWorldThumbnailFlow& operator=(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _beginLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void _finalizeLeaveGame();

    MCNAPI void requestLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void requestLeaveGameThenJoinFriendsWorld(
        ::std::string_view                                                 friendsWorldServerId,
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void update(::LocalPlayer* player);
    // NOLINTEND
};

} // namespace OreUI
