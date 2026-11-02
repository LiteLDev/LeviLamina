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
    // TickingAreaListBase inner types define
    using RequeueAreaFunc = ::std::function<void(::ITickingArea const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ITickingArea>>> mTickingAreas;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingAreaListBase();

    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasContaining(::BlockPos const& position);

    MCNAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasNamed(::std::string const& name) const;

    MCNAPI ::std::shared_ptr<::ITickingArea> getAreaFor(::ActorUniqueID const& entityId) const;

    MCNAPI ::std::vector<::TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    MCNAPI ::std::vector<::TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage& levelStorage);

    MCNAPI ::std::vector<::TickingAreaDescription>
    removeAreas(::std::vector<::std::shared_ptr<::ITickingArea>> const& areasToRemove, ::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
