#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureEditResultPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureEditResultPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb8aa54;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditResultPayload& operator=(StructureEditResultPayload const&);
    StructureEditResultPayload(StructureEditResultPayload const&);
    StructureEditResultPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureEditResultPayload() /*override*/;
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

}
