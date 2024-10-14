#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

class TickingAreasManager {
public:
    // TickingAreasManager inner types define
    enum class AreaLimitCheck {};

public:
    // prevent constructor by default
    TickingAreasManager& operator=(TickingAreasManager const&);
    TickingAreasManager(TickingAreasManager const&);
    TickingAreasManager();

public:
    // NOLINTBEGIN
    MCAPI explicit TickingAreasManager(class StackRefResult<class LevelStorage> const& levelStorage);

    MCAPI ::AddTickingAreaStatus addArea(
        DimensionType                         dimensionId,
        std::string const&                    name,
        class BlockPos const&                 min,
        class BlockPos const&                 max,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        class LevelStorage&                   levelStorage
    );

    MCAPI ::AddTickingAreaStatus addArea(
        DimensionType                         dimensionId,
        std::string const&                    name,
        class BlockPos const&                 center,
        int                                   radius,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        class LevelStorage&                   levelStorage
    );

    MCAPI void addEntityArea(DimensionType dimensionId, class Actor const& actor, class LevelStorage& levelStorage);

    MCAPI void addEntityArea(
        DimensionType               dimensionId,
        struct ActorUniqueID const& entityId,
        struct Bounds const&        bounds,
        bool                        alwaysActive,
        float                       maxDistToPlayers,
        class LevelStorage&         levelStorage
    );

    MCAPI void addTickingAreaListForDimension(
        DimensionType                                 dimensionId,
        std::shared_ptr<class TickingAreaList> const& tickingAreaList
    );

    MCAPI uint countActiveStandaloneTickingAreas() const;

    MCAPI uint countStandaloneTickingAreas() const;

    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptions(DimensionType dimensionId
    ) const;

    MCAPI std::vector<struct TickingAreaDescription>
          getPendingStandaloneAreaDescriptionsByName(DimensionType dimensionId, std::string const& name) const;

    MCAPI std::vector<struct TickingAreaDescription>
    getPendingStandaloneAreaDescriptionsByPosition(DimensionType dimensionId, class BlockPos const& position) const;

    MCAPI bool hasActiveAreas() const;

    MCAPI bool isPreloadDone() const;

    MCAPI void loadArea(std::string const& key, class CompoundTag const* tag);

    MCAPI void loadAreasFromSaveData(class LevelStorage& levelStorage);

    MCAPI void onTickingEntityAdded(DimensionType dimensionId, class Actor& actor, class LevelStorage& levelStorage);

    MCAPI void registerForActorManagerEvents(class ActorManager& actorManager);

    MCAPI void registerForLevelStorageManagerEvents(class LevelStorageManager& levelStorageManager);

    MCAPI std::vector<struct TickingAreaDescription>
          removePendingAreaByName(DimensionType dimensionId, std::string const& name, class LevelStorage& levelStorage);

    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByPosition(
        DimensionType         dimensionId,
        class BlockPos const& position,
        class LevelStorage&   levelStorage
    );

    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByName(
        DimensionType         dimensionId,
        std::string const&    name,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByPosition(
        DimensionType         dimensionId,
        class BlockPos const& position,
        ::TickingAreaLoadMode loadMode,
        class LevelStorage&   levelStorage
    );

    MCAPI void tick(struct Tick const& currentTick);

    MCAPI void update(class Level& level, class LevelStorage& levelStorage);

    MCAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(class Level const& level, bool enforce);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::AddTickingAreaStatus _addArea(
        DimensionType                         dimensionId,
        std::string const&                    name,
        struct Bounds const&                  bounds,
        bool                                  isCircle,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        class LevelStorage&                   levelStorage
    );

    MCAPI void _deletePendingArea(class LevelStorage& levelStorage, struct PendingArea const& pendingArea);

    MCAPI std::string _findUsableDefaultName(
        class TickingAreaList const&           tickingAreaList,
        std::vector<struct PendingArea> const& pendingAreas
    ) const;

    MCAPI std::vector<struct TickingAreaDescription> _getPendingAreaDescriptionsFiltered(
        DimensionType                                  dimensionId,
        std::function<bool(struct PendingArea const&)> includeInList
    ) const;

    MCAPI bool
    _hasPendingTickingAreaNamed(std::string const& name, std::vector<struct PendingArea> const& dimensionAreas) const;

    MCAPI void _postReloadActorAdded(class Actor& actor);

    MCAPI void _processAdds(class Level& level);

    MCAPI void _processRemoves(
        DimensionType          dimensionId,
        class TickingAreaList& list,
        class Level&           level,
        class LevelStorage&    levelStorage
    );

    MCAPI void _savePendingArea(
        class LevelStorage&       levelStorage,
        DimensionType             dimensionId,
        struct PendingArea const& pendingArea
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
