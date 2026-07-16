#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/InfiniteWorldConverter.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace World { class InfiniteWorldConverter; }
namespace World { class WorldEditor; }
// clang-format on

namespace OreUI {

class WorldStorageManagerFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldStorageManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>            mWorldEditor;
    ::ll::TypedStorage<8, 8, ::World::InfiniteWorldConverter&> mWorldSizeConverter;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::DuplicateWorldResult>>
        mDuplicateWorldTask;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::ExportWorldResult>>
                                                                               mExportWorldTask;
    ::ll::TypedStorage<1, 1, ::World::IWorldStorageHandler::ExportWorldStatus> mExportWorldStatus;
    ::ll::TypedStorage<4, 8, ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>>
                                                                           mClearPlayerDataError;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mClearPlayerDataTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>           mClearPlayerDataAsyncResult;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::InfiniteWorldConverter::Result>>
        mMakeWorldInfiniteTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageManagerFacet& operator=(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
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
