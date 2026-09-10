#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/menus/GameVersionObject.h"
#include "mc/client/world/SyncState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IContentAccessibilityProvider;
class IEntitlementManager;
class ILevelListCache;
struct LevelSummary;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace World { class IWorldCloudSyncer; }
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldQuery : public ::OreUI::QueryBase<::OreUI::LocalWorldQuery>, public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                              mLevelListCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>                     mLocalWorldList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                     mWorldCloudSyncer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mAccessibilityProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>           mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>> mEntitlementChangeListener;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                     mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                     mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>                             mLastSaved;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::GameType>>                        mGameMode;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                     mFileSize;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                     mPreviewImgPath;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                              mIsExperimental;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                              mIsHardcore;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                              mPlayerHasDied;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                               mDaysPlayed;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                              mShowDaysPlayed;
    ::ll::TypedStorage<8, 1120, ::OreUI::GameVersionObject>                          mGameVersion;
    ::ll::TypedStorage<8, 1120, ::OreUI::GameVersionObject>                          mTemplateVersion;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                         mIsTemplateCompatibleWithAnyVersion;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                         mAllContentOwned;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                         mRequiresCloudSync;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                         mIsMultiplayerEnabled;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Social::GamePublishSetting>> mXblBroadcastIntent;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                         mIsEditorWorld;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::World::SyncState>>> mCloudSyncState;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldQuery& operator=(LocalWorldQuery const&);
    LocalWorldQuery(LocalWorldQuery const&);
    LocalWorldQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldQuery() /*override*/ = default;

    virtual void onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onSummaryUpdated(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldQuery(::OreUI::GameDependencies const& game, ::std::string worldId);

    MCAPI void _refreshFromSummary(::LevelSummary const& summary);

    MCAPI void _refreshFromSummaryIfMatching(::std::string const& levelId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string worldId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCAPI void $onLevelUpdated(::std::string const& levelId);

    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onSummaryUpdated(::std::string const& levelId);

    MCAPI void $onStorageChanged();
    // NOLINTEND
};

} // namespace OreUI
