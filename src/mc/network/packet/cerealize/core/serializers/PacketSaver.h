#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

class PacketSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk830bd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSaver& operator=(PacketSaver const&);
    PacketSaver(PacketSaver const&);
    PacketSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSaver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
