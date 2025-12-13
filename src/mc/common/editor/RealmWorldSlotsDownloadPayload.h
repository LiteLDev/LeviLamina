#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RealmWorldSlotsDownloadPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldSlotsDownloadPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5a2810;
    ::ll::UntypedStorage<4, 4>  mUnka21459;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldSlotsDownloadPayload& operator=(RealmWorldSlotsDownloadPayload const&);
    RealmWorldSlotsDownloadPayload(RealmWorldSlotsDownloadPayload const&);
    RealmWorldSlotsDownloadPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmWorldSlotsDownloadPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
