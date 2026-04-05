#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/ISyncStreamReader.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

namespace OreUI {

class SyncStreamReader : public ::cohtml::ISyncStreamReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                                         mFile;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>> mFileAccess;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint GetSize() /*override*/;

    virtual uint Read(uint offset, uchar* buffer, uint count) /*override*/;

    virtual void Close() /*override*/;

    virtual ~SyncStreamReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint $GetSize();

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
