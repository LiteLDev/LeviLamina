#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class LevelStorage;
class TickingAreaList;
struct ActorUniqueID;
struct Bounds;
struct IActorManagerConnector;
struct ILevelStorageManagerConnector;
struct PendingArea;
struct TickingAreaDescription;
// clang-format on

class TickingAreasManager {
public:
    // TickingAreasManager inner types define
    enum class AreaLimitCheck : int {
        None                       = 0,
        ActiveStandalone           = 1,
        ActiveAndPendingStandalone = 2,
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
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPostReloadActorAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TickingAreasManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);

    MCAPI ::AddTickingAreaStatus _addArea(
        ::DimensionType                       dimensionId,
        ::std::string const&                  name,
        ::Bounds const&                       bounds,
        bool                                  isCircle,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        ::LevelStorage&                       levelStorage
    );

    MCAPI void _deletePendingArea(::LevelStorage& levelStorage, ::PendingArea const& pendingArea);

    MCAPI ::std::string _findUsableDefaultName(
        ::TickingAreaList const&            tickingAreaList,
        ::std::vector<::PendingArea> const& pendingAreas
    ) const;

    MCAPI ::std::vector<::TickingAreaDescription> _getPendingAreaDescriptionsFiltered(
        ::DimensionType                             dimensionId,
        ::std::function<bool(::PendingArea const&)> includeInList
    ) const;

    MCAPI bool
    _hasPendingTickingAreaNamed(::std::string const& name, ::std::vector<::PendingArea> const& dimensionAreas) const;

    MCAPI void _postReloadActorAdded(::Actor& actor);

    MCAPI void _processAdds(::Level& level);

    MCAPI void
    _processRemoves(::DimensionType dimensionId, ::TickingAreaList& list, ::Level& level, ::LevelStorage& levelStorage);

    MCAPI void
    _savePendingArea(::LevelStorage& levelStorage, ::DimensionType dimensionId, ::PendingArea const& pendingArea);

    MCAPI ::AddTickingAreaStatus addArea(
        ::DimensionType                       dimensionId,
        ::std::string const&                  name,
        ::BlockPos const&                     min,
        ::BlockPos const&                     max,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        ::LevelStorage&                       levelStorage
    );

    MCAPI void addEntityArea(::DimensionType dimensionId, ::Actor const& actor, ::LevelStorage& levelStorage);

    MCAPI void addEntityArea(
        ::DimensionType        dimensionId,
        ::ActorUniqueID const& entityId,
        ::Bounds const&        bounds,
        bool                   alwaysActive,
        float                  maxDistToPlayers,
        ::LevelStorage&        levelStorage
    );

    MCAPI uint countActiveStandaloneTickingAreas() const;

    MCAPI uint countStandaloneTickingAreas() const;

    MCAPI void loadArea(::std::string const& key, ::CompoundTag const* tag);

    MCAPI void onTickingEntityAdded(::DimensionType dimensionId, ::Actor& actor, ::LevelStorage& levelStorage);

    MCAPI void registerForActorManagerEvents(::IActorManagerConnector& actorManagerConnector);

    MCAPI void registerForLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByName(::DimensionType dimensionId, ::std::string const& name, ::LevelStorage& levelStorage);

    MCAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByPosition(::DimensionType dimensionId, ::BlockPos const& position, ::LevelStorage& levelStorage);

    MCAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByName(
        ::DimensionType       dimensionId,
        ::std::string const&  name,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );

    MCAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByPosition(
        ::DimensionType       dimensionId,
        ::BlockPos const&     position,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );

    MCAPI void update(::Level& level, ::LevelStorage& levelStorage);

    MCAPI ~TickingAreasManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const& level, bool enforce);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
