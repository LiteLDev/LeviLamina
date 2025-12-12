#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AddPaintingPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk65b8b0;
    ::ll::UntypedStorage<8, 8>  mUnkde564e;
    ::ll::UntypedStorage<4, 12> mUnkb66789;
    ::ll::UntypedStorage<4, 4>  mUnk8e3057;
    ::ll::UntypedStorage<8, 32> mUnk9905a9;
    // NOLINTEND

public:
    // prevent constructor by default
    AddPaintingPacketPayload& operator=(AddPaintingPacketPayload const&);
    AddPaintingPacketPayload(AddPaintingPacketPayload const&);
    AddPaintingPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AddPaintingPacketPayload& operator=(::AddPaintingPacketPayload&&);

    MCNAPI ~AddPaintingPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
