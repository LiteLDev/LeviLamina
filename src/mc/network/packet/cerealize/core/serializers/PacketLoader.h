#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

class PacketLoader : public ::cereal::BasicLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd9bfbb;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLoader& operator=(PacketLoader const&);
    PacketLoader(PacketLoader const&);
    PacketLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketLoader() /*override*/;
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
