#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RealmWorldListDownloadPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldListDownloadPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5cb545;
    ::ll::UntypedStorage<4, 4> mUnkccae90;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldListDownloadPayload& operator=(RealmWorldListDownloadPayload const&);
    RealmWorldListDownloadPayload(RealmWorldListDownloadPayload const&);
    RealmWorldListDownloadPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmWorldListDownloadPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
