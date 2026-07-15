#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/world/SyncState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace World { class IWorldCloudSyncer; }
// clang-format on

namespace OreUI {

class WorldStorageInfoQuery : public ::OreUI::QueryBase<::OreUI::WorldStorageInfoQuery>,
                              public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                 mWorldCloudSyncer;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mWorldId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mSize;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>         mImagePath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mGameType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>         mCreationDate;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mLastSaveDate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::World::SyncState>>>    mCloudSyncState;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mStorageLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageInfoQuery& operator=(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStorageInfoQuery() /*override*/ = default;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onSummaryUpdated(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldStorageInfoQuery(::OreUI::GameDependencies const& game, ::std::string const& worldId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& worldId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
