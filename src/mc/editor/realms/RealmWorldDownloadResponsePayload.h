#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RealmWorldDownloadResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldDownloadResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb5215d;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldDownloadResponsePayload& operator=(RealmWorldDownloadResponsePayload const&);
    RealmWorldDownloadResponsePayload(RealmWorldDownloadResponsePayload const&);
    RealmWorldDownloadResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldDownloadResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
