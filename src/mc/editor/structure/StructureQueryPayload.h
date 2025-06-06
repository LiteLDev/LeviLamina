#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureQueryPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureQueryPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mUnkb3cb5c;
    ::ll::UntypedStorage<1, 1>   mUnk279361;
    ::ll::UntypedStorage<8, 24>  mUnkdba03d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureQueryPayload& operator=(StructureQueryPayload const&);
    StructureQueryPayload(StructureQueryPayload const&);
    StructureQueryPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureQueryPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
