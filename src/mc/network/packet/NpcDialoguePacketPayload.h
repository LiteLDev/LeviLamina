#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 8>  mUnk4b7367;
    ::ll::UntypedStorage<4, 4>  mUnkbcccf1;
    ::ll::UntypedStorage<8, 32> mUnkf381d0;
    ::ll::UntypedStorage<8, 32> mUnka3a9fe;
    ::ll::UntypedStorage<8, 32> mUnk9d792d;
    ::ll::UntypedStorage<8, 32> mUnk7feb1f;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialoguePacketPayload(NpcDialoguePacketPayload const&);
    NpcDialoguePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NpcDialoguePacketPayload& operator=(::NpcDialoguePacketPayload&&);

    MCNAPI ::NpcDialoguePacketPayload& operator=(::NpcDialoguePacketPayload const&);

    MCNAPI ~NpcDialoguePacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool initializePacket(
        ::NpcDialoguePacket&        outPacket,
        ::NpcDialogueStorage const* storage,
        ::std::string const&        sceneName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
