#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITickingArea;
class LevelStorage;
class Vec3;
struct ActorUniqueID;
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
    virtual ~TickingAreaListBase() = default;

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
    MCNAPI uint countEntityTickingAreas() const;

    MCNAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasContaining(::BlockPos const& position);

    MCNAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasNamed(::std::string const& name) const;

    MCNAPI ::std::shared_ptr<::ITickingArea> getAreaFor(::ActorUniqueID const& entityId) const;

    MCNAPI ::std::vector<::TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    MCNAPI bool hasTickingAreaNamed(::std::string const& name) const;

    MCNAPI void processRemoves();

    MCNAPI ::std::vector<::TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage& levelStorage);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removeAreas(::std::vector<::std::shared_ptr<::ITickingArea>> const& areasToRemove, ::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
