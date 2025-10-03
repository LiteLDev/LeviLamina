#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThumbnailCacheFetchRequestPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThumbnailCacheFetchRequestPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkeae49b;
    ::ll::UntypedStorage<4, 4>  mUnkf05391;
    // NOLINTEND

public:
    // prevent constructor by default
    ThumbnailCacheFetchRequestPayload& operator=(ThumbnailCacheFetchRequestPayload const&);
    ThumbnailCacheFetchRequestPayload(ThumbnailCacheFetchRequestPayload const&);
    ThumbnailCacheFetchRequestPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThumbnailCacheFetchRequestPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
