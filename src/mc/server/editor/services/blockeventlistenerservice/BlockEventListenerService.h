#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Player;
// clang-format on

namespace Editor::Services {

class BlockEventListenerService : public ::Editor::Services::IEditorService,
                                  public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventListenerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const&, ::BlockPos const& pos, bool) /*override*/;
#else // LL_PLAT_C
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;
#endif

    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player& player, ::Block const&, ::BlockPos const& pos, bool);

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
