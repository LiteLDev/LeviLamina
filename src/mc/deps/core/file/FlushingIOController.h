#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class FlushingIOController {
public:
    // FlushingIOController inner types declare
    // clang-format off
    class Flusher;
    // clang-format on

    // FlushingIOController inner types define
    class Flusher {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Flusher();

        // vIndex: 1
        virtual ::Core::Result _flushBuffer(void const*, uint64) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka30178;
    ::ll::UntypedStorage<8, 8> mUnkc26063;
    ::ll::UntypedStorage<8, 8> mUnk5f53e1;
    ::ll::UntypedStorage<8, 8> mUnk77d4a1;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushingIOController& operator=(FlushingIOController const&);
    FlushingIOController(FlushingIOController const&);
    FlushingIOController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Result write(void const* data, uint64 byteCount);
    // NOLINTEND
};

} // namespace Bedrock
