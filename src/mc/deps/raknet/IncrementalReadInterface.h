#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FileListNodeContext;
// clang-format on

namespace RakNet {

class IncrementalReadInterface {
public:
    // prevent constructor by default
    IncrementalReadInterface& operator=(IncrementalReadInterface const&);
    IncrementalReadInterface(IncrementalReadInterface const&);
    IncrementalReadInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IncrementalReadInterface() = default;

    // vIndex: 1
    virtual uint GetFilePart(char const*, uint, uint, void*, ::FileListNodeContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
