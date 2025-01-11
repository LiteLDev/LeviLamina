#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITickingArea;
class LevelStorage;
class Random;
class Vec3;
struct ActorUniqueID;
struct Tick;
struct TickingAreaDescription;
// clang-format on

class TickingAreaListBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb205b3;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaListBase& operator=(TickingAreaListBase const&);
    TickingAreaListBase(TickingAreaListBase const&);
    TickingAreaListBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreaListBase();

    // vIndex: 1
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(::std::unique_ptr<::ITickingArea> area);

    MCAPI uint countEntityTickingAreas() const;

    MCAPI void destroyAreas();

    MCAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasContaining(::BlockPos const& position);

    MCAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasNamed(::std::string const& name) const;

    MCAPI ::std::shared_ptr<::ITickingArea> getAreaFor(::ActorUniqueID const& entityId) const;

    MCFOLD ::std::vector<::std::shared_ptr<::ITickingArea>> const& getAreas() const;

    MCAPI ::std::vector<::TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    MCAPI bool hasTickingAreaNamed(::std::string const& name) const;

    MCAPI void processRemoves();

    MCAPI ::std::vector<::TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage& levelStorage);

    MCAPI ::std::vector<::TickingAreaDescription>
    removeAreas(::std::vector<::std::shared_ptr<::ITickingArea>> const& areasToRemove, ::LevelStorage& levelStorage);

    MCAPI void tickSeasons(::Random& random);

    MCAPI void updateBlockSourceCurrentTick(::Tick const& currentTick);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
