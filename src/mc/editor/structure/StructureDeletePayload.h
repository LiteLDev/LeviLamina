#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureDeletePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDeletePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk8e0b4f;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDeletePayload& operator=(StructureDeletePayload const&);
    StructureDeletePayload(StructureDeletePayload const&);
    StructureDeletePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureDeletePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureDeletePayload() /*override*/;
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
