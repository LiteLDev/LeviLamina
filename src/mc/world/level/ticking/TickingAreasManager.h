#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class Level;
class LevelStorage;
class TickingAreaList;
struct ActorUniqueID;
struct Bounds;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf7d085;
    ::ll::UntypedStorage<8, 64> mUnk834614;
    ::ll::UntypedStorage<1, 1>  mUnk6225fd;
    ::ll::UntypedStorage<8, 24> mUnk85f8a0;
    ::ll::UntypedStorage<8, 16> mUnk5486bd;
    ::ll::UntypedStorage<8, 16> mUnkd3ead8;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreasManager& operator=(TickingAreasManager const&);
    TickingAreasManager(TickingAreasManager const&);
    TickingAreasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TickingAreasManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);

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

    MCNAPI void _deletePendingArea(::LevelStorage& levelStorage, ::PendingArea const& pendingArea);

    MCNAPI ::std::string _findUsableDefaultName(
        ::TickingAreaList const&            tickingAreaList,
        ::std::vector<::PendingArea> const& pendingAreas
    ) const;

    MCNAPI ::std::vector<::TickingAreaDescription> _getPendingAreaDescriptionsFiltered(
        ::DimensionType                             dimensionId,
        ::std::function<bool(::PendingArea const&)> includeInList
    ) const;

    MCNAPI bool
    _hasPendingTickingAreaNamed(::std::string const& name, ::std::vector<::PendingArea> const& dimensionAreas) const;

    MCNAPI void _postReloadActorAdded(::Actor& actor);

    MCNAPI void _processAdds(::Level& level);

    MCNAPI void
    _processRemoves(::DimensionType dimensionId, ::TickingAreaList& list, ::Level& level, ::LevelStorage& levelStorage);

    MCNAPI void
    _savePendingArea(::LevelStorage& levelStorage, ::DimensionType dimensionId, ::PendingArea const& pendingArea);

    MCNAPI ::AddTickingAreaStatus addArea(
        ::DimensionType                       dimensionId,
        ::std::string const&                  name,
        ::BlockPos const&                     min,
        ::BlockPos const&                     max,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        ::LevelStorage&                       levelStorage
    );

    MCNAPI void addEntityArea(::DimensionType dimensionId, ::Actor const& actor, ::LevelStorage& levelStorage);

    MCNAPI void addEntityArea(
        ::DimensionType        dimensionId,
        ::ActorUniqueID const& entityId,
        ::Bounds const&        bounds,
        bool                   alwaysActive,
        float                  maxDistToPlayers,
        ::LevelStorage&        levelStorage
    );

    MCNAPI uint countActiveStandaloneTickingAreas() const;

    MCNAPI uint countStandaloneTickingAreas() const;

    MCNAPI void loadArea(::std::string const& key, ::CompoundTag const* tag);

    MCNAPI void onTickingEntityAdded(::DimensionType dimensionId, ::Actor& actor, ::LevelStorage& levelStorage);

    MCNAPI void registerForActorManagerEvents(::IActorManagerConnector& actorManagerConnector);

    MCNAPI void registerForLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByName(::DimensionType dimensionId, ::std::string const& name, ::LevelStorage& levelStorage);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByPosition(::DimensionType dimensionId, ::BlockPos const& position, ::LevelStorage& levelStorage);

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

    MCNAPI ~TickingAreasManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const& level, bool enforce);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
