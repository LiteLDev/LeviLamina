#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Player;
namespace Editor::Transactions { struct BlockChangedOperationData; }
// clang-format on

namespace Editor::Services {

class BlockEventListenerService : public ::Editor::Services::IEditorService,
                                  public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventListenerService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;

    // vIndex: 3
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::Editor::Transactions::BlockChangedOperationData>
    _fillDestroyAction(::BlockSource const& region, ::BlockPos const& pos) const;

    MCNAPI ::std::vector<::Editor::Transactions::BlockChangedOperationData>
    _fillPlacedAction(::BlockSource const& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCNAPI ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEventListenerDispatcher();
    // NOLINTEND
};

} // namespace Editor::Services
