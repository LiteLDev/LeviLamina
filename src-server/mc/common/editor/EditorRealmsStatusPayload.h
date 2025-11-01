#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class EditorRealmsStatusPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::EditorRealmsStatusPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk375a1d;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsStatusPayload& operator=(EditorRealmsStatusPayload const&);
    EditorRealmsStatusPayload(EditorRealmsStatusPayload const&);
    EditorRealmsStatusPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorRealmsStatusPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
