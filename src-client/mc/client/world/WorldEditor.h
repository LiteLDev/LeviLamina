#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/SaveWorldError.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
struct LevelSummary;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace World { class IWorldResourcePackHandler; }
namespace World { class IWorldStorageHandler; }
namespace World { class IWorldTemplateHandler; }
namespace World { struct WorldData; }
namespace World { struct WorldPacksData; }
// clang-format on

namespace World {

class WorldEditor : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                               mNextModifier;
    ::ll::TypedStorage<1, 1, bool const>                                        mIsEduMode;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldResourcePackHandler&>               mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                    mWorldStorageHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldTemplateHandler>> mWorldTemplateHandler;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::World::WorldID), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                                          mOnLevelDataUpdatedPublisher;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                    mOnSaveCompletedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::World::SaveWorldError)>>             mOnSaveErrorCallback;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::WorldID>>                            mIDs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::World::WorldData>> mWorlds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::LevelData>>        mLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::LevelSummary>>     mLevelSummary;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::RealmId>>                           mRealmIDs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int64, ::Realms::World>>               mRealmWorlds;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mNotifyWorldsInvalidated;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldEditor& operator=(WorldEditor const&);
    WorldEditor(WorldEditor const&);
    WorldEditor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual ~WorldEditor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldEditor(
        ::ILevelListCache&                                levelListCache,
        bool                                              isEduMode,
        ::World::IWorldResourcePackHandler&               worldResourcePackHandler,
        ::World::IWorldStorageHandler&                    worldStorageHandler,
        ::std::unique_ptr<::World::IWorldTemplateHandler> worldTemplateHandler
    );

    MCAPI void _addWorldEditorEntry(
        ::World::WorldID const&                               worldID,
        ::World::IWorldStorageHandler::CachedWorldData const& cachedWorldData
    );

    MCAPI bool _closeWorld(::World::WorldID const& worldID);

    MCAPI void _onWorldIconUpdated(::World::WorldID const& worldID);

    MCAPI bool _refreshWorldData(::World::WorldID const& worldID);

    MCAPI void _saveWorld(
        ::World::WorldID const&                        worldID,
        ::std::function<void()>                        onCompleteCallback,
        ::std::function<void(::World::SaveWorldError)> onErrorCallback
    );

    MCAPI ::std::optional<::World::PackActionError>
    activatePack(::World::WorldID const& worldID, ::ContentType contentType, ::std::string const& packId, bool force);

    MCAPI ::World::WorldID addWorld();

    MCAPI void addWorldFromTemplate(
        ::std::string const&                                                                        templateId,
        ::std::function<void(::std::variant<::World::AddWorldFromTemplateError, ::World::WorldID>)> onComplete
    );

    MCAPI ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&                                                    worldID,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    ) const;

    MCAPI ::std::optional<::World::PackActionError>
    deactivatePack(::World::WorldID const& worldID, ::ContentType contentType, ::std::string const& packId, bool force);

    MCAPI void downloadPacks(
        ::World::WorldID const&                           worldID,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    );

    MCAPI void duplicateWorld(
        ::World::WorldID const&                                                    worldID,
        ::std::function<void()>                                                    onCompleteCallback,
        ::std::function<void()>                                                    onCancelCallback,
        ::std::function<void(::World::IWorldStorageHandler::DuplicateWorldResult)> onErrorCallback
    );

    MCAPI void exportWorld(
        ::World::WorldID const&                                                 worldID,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) const;

    MCAPI void exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldID,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) const;

    MCAPI ::World::WorldData* getWorld(::World::WorldID const& worldID);

    MCAPI ::World::WorldPacksData getWorldPacksData(::World::WorldID const& worldID);

    MCAPI ::std::optional<::World::IWorldStorageHandler::ReadWorldError> loadWorld(::World::WorldID const& worldID);

    MCAPI ::Bedrock::PubSub::Subscription
    registerWorldIconUpdatedListener(::std::function<void(::World::WorldID const&)> callback);

    MCAPI void saveWorld(
        ::World::WorldID const&                        worldID,
        ::std::function<void()>                        onCompleteCallback,
        ::std::function<void(::World::SaveWorldError)> onErrorCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                levelListCache,
        bool                                              isEduMode,
        ::World::IWorldResourcePackHandler&               worldResourcePackHandler,
        ::World::IWorldStorageHandler&                    worldStorageHandler,
        ::std::unique_ptr<::World::IWorldTemplateHandler> worldTemplateHandler
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
    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onLevelUpdated(::std::string const& levelId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
