#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
struct LevelNotificationEvent;
// clang-format on

class GameTestLevelListener : public ::LevelEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk66625a;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const&);
    GameTestLevelListener(GameTestLevelListener const&);
    GameTestLevelListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual ::EventResult onLevelTickEnd(::Level&) /*override*/;

    // vIndex: 9
    virtual ::EventResult onEvent(::LevelNotificationEvent const& event) /*override*/;

    // vIndex: 0
    virtual ~GameTestLevelListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
