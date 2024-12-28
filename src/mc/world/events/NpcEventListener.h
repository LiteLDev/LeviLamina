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
    // prevent constructor by default
    NpcEventListener& operator=(NpcEventListener const&);
    NpcEventListener(NpcEventListener const&);
    NpcEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcEventListener();

    // vIndex: 1
    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData>);

    // vIndex: 2
    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData>);

    MCAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND
};
