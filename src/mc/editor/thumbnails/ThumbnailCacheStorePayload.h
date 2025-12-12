#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThumbnailCacheStorePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThumbnailCacheStorePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk661b15;
    ::ll::UntypedStorage<4, 4>  mUnkf1d7b1;
    ::ll::UntypedStorage<8, 40> mUnk396070;
    // NOLINTEND

public:
    // prevent constructor by default
    ThumbnailCacheStorePayload& operator=(ThumbnailCacheStorePayload const&);
    ThumbnailCacheStorePayload(ThumbnailCacheStorePayload const&);
    ThumbnailCacheStorePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ThumbnailCacheStorePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ThumbnailCacheStorePayload() /*override*/;
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
