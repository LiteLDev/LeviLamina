#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ISyncStreamReader.h"

namespace OreUI {

class SyncCachedStreamReader : public ::cohtml::ISyncStreamReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint GetSize() /*override*/;

    virtual uint Read(uint offset, uchar* buffer, uint count) /*override*/;

    virtual void Close() /*override*/;

    virtual ~SyncCachedStreamReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint $GetSize();

    MCAPI uint $Read(uint offset, uchar* buffer, uint count);

    MCAPI void $Close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
