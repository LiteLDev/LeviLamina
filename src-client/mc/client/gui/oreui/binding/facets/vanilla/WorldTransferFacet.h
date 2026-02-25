#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"

// auto generated forward declare list
// clang-format off
namespace World { class WorldTransferer; }
// clang-format on

namespace OreUI {

class WorldTransferFacet : public ::OreUI::FacetBase<::OreUI::WorldTransferFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldTransferer&> mWorldTransferer;
    ::ll::TypedStorage<8, 152, ::OreUI::AsyncStatefulFunction_DEPRECATED<::World::TransferResult()>>
        mImportWorldFunctor_DEPRECATED;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::DuplicateWorldResult>>
                                                                                  mBackupWorldTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::TransferResult>> mImportWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferFacet& operator=(WorldTransferFacet const&);
    WorldTransferFacet(WorldTransferFacet const&);
    WorldTransferFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTransferFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void backupWorld(::std::string const& world);

    MCFOLD ::OreUI::FacetTaskState const getBackupWorldProgress();

    MCFOLD ::std::optional<::World::IWorldStorageHandler::DuplicateWorldResult> const& getBackupWorldResult();

    MCFOLD ::OreUI::AsyncStatefulFunction_DEPRECATED<::World::TransferResult()>& getImportWorldFunctor_DEPRICATED();

    MCFOLD ::OreUI::FacetTaskState const getImportWorldProgress();

    MCAPI float getImportWorldProgressPercentage();

    MCFOLD ::std::optional<::World::TransferResult> const& getImportWorldResult();

    MCAPI void importWorld();

    MCAPI void resetBackupWorld();

    MCAPI void resetImportWorld();
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
