#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureFromSelectionPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureFromSelectionPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6b58e9;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureFromSelectionPayload& operator=(StructureFromSelectionPayload const&);
    StructureFromSelectionPayload(StructureFromSelectionPayload const&);
    StructureFromSelectionPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureFromSelectionPayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureFromSelectionPayload() /*override*/;
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
