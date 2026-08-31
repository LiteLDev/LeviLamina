#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionContainer.h"

struct NpcDialogueScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mSceneName;
    ::ll::TypedStorage<8, 32, ::std::string>          mText;
    ::ll::TypedStorage<8, 32, ::std::string>          mNPCName;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> mActionsContainer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NpcDialogueScene();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
