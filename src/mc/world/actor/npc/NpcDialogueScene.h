#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

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
    // prevent constructor by default
    NpcDialogueScene& operator=(NpcDialogueScene const&);
    NpcDialogueScene(NpcDialogueScene const&);
    NpcDialogueScene();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NpcDialogueScene& operator=(::NpcDialogueScene&&);

    MCAPI ~NpcDialogueScene();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NpcDialogueScene
    parse(::Json::Value const& sceneNode, ::std::string const& fileName, int packCommandVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
