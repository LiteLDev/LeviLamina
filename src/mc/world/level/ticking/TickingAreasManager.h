#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#include "mc/world/level/ticking/TickingAreaLimitPolicy.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class Level;
class LevelStorage;
class TickingAreaList;
struct ActorUniqueID;
struct PendingArea;
struct TickingAreaDescription;
// clang-format on

class TickingAreasManager {
public:
    // TickingAreasManager inner types declare
    // clang-format off
    struct ScopedContext;
    // clang-format on

    // TickingAreasManager inner types define
    enum class AreaLimitCheck : int {
        None                       = 0,
        ActiveStandalone           = 1,
        ActiveAndPendingStandalone = 2,
    };

    struct ScopedContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID>   mUuid;
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<4, 48, ::Bounds>      mBounds;
        ::ll::TypedStorage<1, 1, bool>           mFinishedLoading;
        ::ll::TypedStorage<1, 1, bool>           mIsActive;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScopedContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ActivePerDimension = ::std::map<::DimensionType, ::std::shared_ptr<::TickingAreaList>>;

    using PendingPerDimension = ::std::unordered_map<::DimensionType, ::std::vector<::PendingArea>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::DimensionType, ::std::shared_ptr<::TickingAreaList>>>   mActiveAreas;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::std::vector<::PendingArea>>> mPendingAreas;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsPreloadDone;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const>                    mLevelStorage;
    ::ll::TypedStorage<4, 24, ::TickingAreaLimitPolicy const>                                      mLimitPolicy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPostReloadActorAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    TickingAreasManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, ::TickingAreaLimitPolicy limitPolicy);

    MCNAPI ::AddTickingAreaStatus _addArea(
        ::DimensionType                       dimensionId,
        ::std::string const&                  name,
        ::Bounds const&                       bounds,
        bool                                  isCircle,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        ::LevelStorage&                       levelStorage
    );

    MCNAPI ::std::vector<::TickingAreaDescription> _getPendingAreaDescriptionsFiltered(
        ::DimensionType                             dimensionId,
        ::std::function<bool(::PendingArea const&)> includeInList
    ) const;

    MCNAPI void _postReloadActorAdded(::Actor& actor);

    MCNAPI void addEntityArea(::DimensionType dimensionId, ::Actor const& actor, ::LevelStorage& levelStorage);

    MCNAPI void addEntityArea(
        ::DimensionType        dimensionId,
        ::ActorUniqueID const& entityId,
        ::Bounds               bounds,
        bool                   alwaysActive,
        float                  maxDistToPlayers,
        ::LevelStorage&        levelStorage
    );

    MCNAPI void addTickingAreaListForDimension(
        ::DimensionType                             dimensionId,
        ::std::shared_ptr<::TickingAreaList> const& tickingAreaList
    );

    MCNAPI ::TickingAreasManager::ScopedContext addTransientScopedArea(
        ::DimensionType      dimensionId,
        ::std::string const& name,
        uint64               scopeKey,
        ::mce::UUID          uuid,
        ::Bounds const&      bounds
    );

    MCNAPI uint countStandaloneTickingAreas() const;

    MCNAPI void registerForActorManagerEvents(::IActorManagerConnector& actorManagerConnector);

    MCNAPI void registerForLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByName(::DimensionType dimensionId, ::std::string const& name, ::LevelStorage& levelStorage);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByPosition(::DimensionType dimensionId, ::BlockPos const& position, ::LevelStorage& levelStorage);

    MCNAPI void removeScopedAreas(::std::vector<::mce::UUID> const& uuids);

    MCNAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByName(
        ::DimensionType       dimensionId,
        ::std::string const&  name,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );

    MCNAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByPosition(
        ::DimensionType       dimensionId,
        ::BlockPos const&     position,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );

    MCNAPI void update(::Level& level, ::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _deletePendingArea(::LevelStorage& levelStorage, ::PendingArea const& pendingArea);

    MCNAPI static void
    _savePendingArea(::LevelStorage& levelStorage, ::DimensionType dimensionId, ::PendingArea const& pendingArea);

    MCNAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const& level, bool enforce);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, ::TickingAreaLimitPolicy limitPolicy);
    // NOLINTEND
};
