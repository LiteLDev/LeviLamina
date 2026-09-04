#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class NpcDialoguePacket;
class NpcDialogueStorage;
// clang-format on

struct NpcDialoguePacketPayload {
public:
    // NpcDialoguePacketPayload inner types define
    enum class NpcDialogueActionType : int {
        Open  = 0,
        Close = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mNpcId;
    ::ll::TypedStorage<4, 4, ::NpcDialoguePacketPayload::NpcDialogueActionType> mNpcDialogueActionType;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mDialogue;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSceneName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mNpcName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mActionJSON;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialoguePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NpcDialoguePacketPayload(::ActorUniqueID npcID);

    MCAPI NpcDialoguePacketPayload(
        ::ActorUniqueID                                   npcID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType dialogueActionType,
        ::std::string const&                              dialogueText,
        ::std::string const&                              sceneName,
        ::std::string const&                              npcName,
        ::std::string const&                              actionJSON
    );

    MCAPI ~NpcDialoguePacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool initializePacket(
        ::NpcDialoguePacket&        outPacket,
        ::NpcDialogueStorage const* storage,
        ::std::string const&        sceneName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUniqueID npcID);

    MCAPI void* $ctor(
        ::ActorUniqueID                                   npcID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType dialogueActionType,
        ::std::string const&                              dialogueText,
        ::std::string const&                              sceneName,
        ::std::string const&                              npcName,
        ::std::string const&                              actionJSON
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
