#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // ScriptBlockGlobalEventListener inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // ScriptBlockGlobalEventListener inner types define
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkb195e1;
        ::ll::UntypedStorage<8, 16> mUnkfa128e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Listener& operator=(Listener const&);
        Listener(Listener const&);
        Listener();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk65e894;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockGlobalEventListener& operator=(ScriptBlockGlobalEventListener const&);
    ScriptBlockGlobalEventListener(ScriptBlockGlobalEventListener const&);
    ScriptBlockGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    ) /*override*/;

    virtual ~ScriptBlockGlobalEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
