#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureCopyToClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureCopyToClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80d2a8;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureCopyToClipboardPayload& operator=(StructureCopyToClipboardPayload const&);
    StructureCopyToClipboardPayload(StructureCopyToClipboardPayload const&);
    StructureCopyToClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureCopyToClipboardPayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureCopyToClipboardPayload() /*override*/;
#endif

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

} // namespace Editor::Network
