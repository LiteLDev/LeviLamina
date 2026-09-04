#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RealmWorldUploadResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldUploadResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk64ab6f;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldUploadResponsePayload& operator=(RealmWorldUploadResponsePayload const&);
    RealmWorldUploadResponsePayload(RealmWorldUploadResponsePayload const&);
    RealmWorldUploadResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldUploadResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
