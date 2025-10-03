#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct crc_context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8f586f;
    ::ll::UntypedStorage<4, 4>  mUnk77d52b;
    ::ll::UntypedStorage<8, 16> mUnk5cbfd6;
    ::ll::UntypedStorage<8, 8>  mUnk3c8c9f;
    ::ll::UntypedStorage<8, 8>  mUnkd678c8;
    ::ll::UntypedStorage<8, 8>  mUnk596aa0;
    ::ll::UntypedStorage<4, 4>  mUnkf573c4;
    // NOLINTEND

public:
    // prevent constructor by default
    crc_context& operator=(crc_context const&);
    crc_context(crc_context const&);
    crc_context();
};
