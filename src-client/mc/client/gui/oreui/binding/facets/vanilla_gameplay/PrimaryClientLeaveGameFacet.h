#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/util/ScreenshotOptions.h"
#include "mc/client/util/renderdragon/PendingScreenshotImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class ILevelListCache;
class LocalPlayer;
class ServerInstance;
namespace mce { struct ViewportInfo; }
// clang-format on

namespace OreUI {

class PrimaryClientLeaveGameFacet : public ::OreUI::FacetBase<::OreUI::PrimaryClientLeaveGameFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::renderdragon::PendingScreenshotImage>>     mPendingScreenshot;
    ::ll::TypedStorage<8, 272, ::std::optional<::ScreenshotOptions>>                       mPendingScreenshotOptions;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                           mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources>> mCubemapBackgroundResources;
    ::ll::TypedStorage<8, 64, ::std::function<::ServerInstance const*()>>                  mGetServerInstance;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer const*()>>                     mGetLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                     mRequestLeaveGame;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>>                   mRequestJoinGame;
    ::ll::TypedStorage<8, 64, ::std::function<::mce::ViewportInfo()>>                      mGetViewportInfo;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mFriendsWorldToJoin;
    // NOLINTEND

public:
    // prevent constructor by default
    PrimaryClientLeaveGameFacet& operator=(PrimaryClientLeaveGameFacet const&);
    PrimaryClientLeaveGameFacet(PrimaryClientLeaveGameFacet const&);
    PrimaryClientLeaveGameFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~PrimaryClientLeaveGameFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PrimaryClientLeaveGameFacet(
        ::ILevelListCache&                                          levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> cubemapBackgroundResources,
        ::std::function<::ServerInstance const*()>                  getServerInstance,
        ::std::function<::LocalPlayer const*()>                     getLocalPlayer,
        ::std::function<void()>                                     requestLeaveGame,
        ::std::function<void(::std::string_view)>                   requestJoinGame,
        ::std::function<::mce::ViewportInfo()>                      getViewportInfo
    );

    MCAPI bool _beginLeaveGame();

    MCAPI void _finalizeLeaveGame();

    MCAPI void leaveGame();

    MCAPI void leaveGameThenJoinFriendsWorld(::std::string const& serverId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                          levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> cubemapBackgroundResources,
        ::std::function<::ServerInstance const*()>                  getServerInstance,
        ::std::function<::LocalPlayer const*()>                     getLocalPlayer,
        ::std::function<void()>                                     requestLeaveGame,
        ::std::function<void(::std::string_view)>                   requestJoinGame,
        ::std::function<::mce::ViewportInfo()>                      getViewportInfo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
