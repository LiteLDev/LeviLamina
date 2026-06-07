#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct INpcDialogueData;
// clang-format on

class NpcEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcEventListener();

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
