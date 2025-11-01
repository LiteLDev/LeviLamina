#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureMetadataListPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureMetadataListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd36f79;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureMetadataListPayload& operator=(StructureMetadataListPayload const&);
    StructureMetadataListPayload(StructureMetadataListPayload const&);
    StructureMetadataListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureMetadataListPayload() /*override*/;
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
