#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"

// auto generated forward declare list
// clang-format off
namespace World { class WorldTransferer; }
// clang-format on

namespace OreUI {

class WorldTransferFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldTransferFacet> {
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
    MCAPI explicit WorldTransferFacet(::World::WorldTransferer& worldTransferer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::WorldTransferer& worldTransferer);
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
