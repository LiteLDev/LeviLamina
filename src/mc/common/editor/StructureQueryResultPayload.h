#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureQueryResultPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureQueryResultPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5eadd0;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureQueryResultPayload& operator=(StructureQueryResultPayload const&);
    StructureQueryResultPayload(StructureQueryResultPayload const&);
    StructureQueryResultPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureQueryResultPayload() /*override*/;
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
