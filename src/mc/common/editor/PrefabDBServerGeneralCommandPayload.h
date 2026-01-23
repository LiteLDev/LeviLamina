#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PrefabDBServerGeneralCommandPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBServerGeneralCommandPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkd34064;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServerGeneralCommandPayload& operator=(PrefabDBServerGeneralCommandPayload const&);
    PrefabDBServerGeneralCommandPayload(PrefabDBServerGeneralCommandPayload const&);
    PrefabDBServerGeneralCommandPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerGeneralCommandPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
