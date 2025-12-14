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
    NpcDialoguePacketPayload(NpcDialoguePacketPayload const&);
    NpcDialoguePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NpcDialoguePacketPayload& operator=(::NpcDialoguePacketPayload&&);

    MCAPI ::NpcDialoguePacketPayload& operator=(::NpcDialoguePacketPayload const&);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
