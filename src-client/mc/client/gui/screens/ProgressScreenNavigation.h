#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
struct ProgressHandler;
namespace OreUI { struct Router; }
// clang-format on

namespace ui {

class ProgressScreenNavigation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                               mSceneFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>> mSceneStack;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                              mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressScreenNavigation& operator=(ProgressScreenNavigation const&);
    ProgressScreenNavigation(ProgressScreenNavigation const&);
    ProgressScreenNavigation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressScreenNavigation() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void navigateToJoinServerProgressScreen(
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        bool                                 allowSmallDownloads,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI void navigateToRealmsWorldProgressScreen(
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 isRealmsPlusExpired,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCAPI void navigateToTimelineRequirementScreen(::std::string const& realmId);

    MCAPI void pushProgressScreen(
        ::std::string const&  screenTitle,
        ::std::string const&  eventName,
        ::ProgressContentType contentType,
        ::GameType            gameType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ui
