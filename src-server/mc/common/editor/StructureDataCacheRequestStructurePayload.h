#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureDataCacheRequestStructurePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheRequestStructurePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk90944a;
    ::ll::UntypedStorage<8, 16> mUnkbf1402;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheRequestStructurePayload& operator=(StructureDataCacheRequestStructurePayload const&);
    StructureDataCacheRequestStructurePayload(StructureDataCacheRequestStructurePayload const&);
    StructureDataCacheRequestStructurePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureDataCacheRequestStructurePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
