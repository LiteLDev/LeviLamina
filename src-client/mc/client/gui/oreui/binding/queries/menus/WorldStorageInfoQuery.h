#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/client/world/SyncState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace StorageManager { class IWorldProvider; }
namespace World { class IWorldCloudSyncer; }
// clang-format on

namespace OreUI {

class WorldStorageInfoQuery : public ::OreUI::QueryBase<::OreUI::WorldStorageInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType>                               mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StorageManager::IWorldProvider>>         mWorldProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mWorldDataChangedSubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                 mWorldCloudSyncer;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mWorldId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mSize;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
                                                                                mImagePath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mGameType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
                                                                                mCreationDate;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mLastSaveDate;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::std::optional<::World::SyncState>, ::std::optional<::World::SyncState>>>
                                                                                      mCloudSyncState;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>> mStorageLocations;
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

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldStorageInfoQuery(
        ::OreUI::GameDependencies const& game,
        ::std::string const&             worldId,
        ::std::string const&             type
    );

    MCAPI void _tryUpdateCloudProperties();

    MCAPI void _tryUpdateProperties();

    MCAPI void _updateCloudProperties(::std::optional<::World::SyncState> syncState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& worldId, ::std::string const& type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
