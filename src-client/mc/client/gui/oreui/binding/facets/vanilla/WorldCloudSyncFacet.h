#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace World { class IWorldCloudSyncer; }
// clang-format on

namespace OreUI {

class WorldCloudSyncFacet : public ::OreUI::FacetBase<::OreUI::WorldCloudSyncFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                               mWorldCloudSyncer;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::WorldCloudSyncResult>> mSyncWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncFacet& operator=(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearSyncWorldTaskState();

    MCFOLD ::std::optional<::World::WorldCloudSyncResult> const& getSyncWorldResult() const;

    MCFOLD ::OreUI::FacetTaskState getSyncWorldTaskState() const;

    MCAPI void syncWorld(::std::string const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
