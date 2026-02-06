#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ResourceLocation;
class UserDataScreenController;
struct ActorUniqueID;
struct PlayerScore;
struct ScoreboardCacheData;
// clang-format on

class ScoreboardScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UserDataScreenController>> mUserDataScreenController;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScoreboardCacheData>>          mSidebarCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScoreboardCacheData>>          mListCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScoreboardCacheData>>          mListUnscoredPlayers;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorUniqueID const&)>> mNavigateToPermissionsCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScoreboardScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::std::function<void(::ActorUniqueID const&)>  navigateToPermissions
    );

    MCAPI void _generatePlayerLists();

    MCAPI ::std::string _getPermissionIcon(::ActorUniqueID playerId) const;

    MCAPI ::ActorUniqueID _getScoredActorID(int index) const;

    MCAPI ::ResourceLocation _getScoredPlayerIconInfo(int index) const;

    MCAPI ::ResourceLocation _getUnscoredPlayerIconInfo(int index) const;

    MCAPI void _registerBindings();

    MCAPI void buildCacheFromDisplayInfo(
        ::std::vector<::ScoreboardCacheData>&                         output,
        ::std::vector<::PlayerScore> const&                           input,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver
    );

    MCAPI bool isSidebarValid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::std::function<void(::ActorUniqueID const&)>  navigateToPermissions
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
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
