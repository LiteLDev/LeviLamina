#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureEditPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureEditPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 304> mUnk35d5c2;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditPayload& operator=(StructureEditPayload const&);
    StructureEditPayload(StructureEditPayload const&);
    StructureEditPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureEditPayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
