#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct INpcDialogueData;
class NpcEventListener;
// clang-format on

class NpcEventCoordinator : public ::EventCoordinator<::NpcEventListener> {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void sendNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    MCAPI void sendNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
