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
#ifdef LL_PLAT_S
    virtual ~NpcEventListener() = default;
#else // LL_PLAT_C
    virtual ~NpcEventListener();
#endif

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::EventResult $onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    MCFOLD ::EventResult $onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
