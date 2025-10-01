#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThumbnailCacheFetchReplyPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThumbnailCacheFetchReplyPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka9457b;
    ::ll::UntypedStorage<4, 4>  mUnk1889d1;
    ::ll::UntypedStorage<8, 48> mUnkb3944c;
    // NOLINTEND

public:
    // prevent constructor by default
    ThumbnailCacheFetchReplyPayload& operator=(ThumbnailCacheFetchReplyPayload const&);
    ThumbnailCacheFetchReplyPayload(ThumbnailCacheFetchReplyPayload const&);
    ThumbnailCacheFetchReplyPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThumbnailCacheFetchReplyPayload() /*override*/;
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
