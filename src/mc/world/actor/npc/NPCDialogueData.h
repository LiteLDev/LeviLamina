#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
class NpcComponent;
class NpcDialoguePacket;
// clang-format on

struct NPCDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>        npcActor;
    ::ll::TypedStorage<1, 1, bool>                    isRemoteFire;
    ::ll::TypedStorage<8, 32, ::std::string>          overrideDialogue;
    ::ll::TypedStorage<8, 32, ::std::string>          sceneName;
    ::ll::TypedStorage<8, 32, ::std::string>          npcName;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> overrideActions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void parsePacket(::NpcDialoguePacket const& packet, ::NpcComponent* component);

    MCAPI_C ~NPCDialogueData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
