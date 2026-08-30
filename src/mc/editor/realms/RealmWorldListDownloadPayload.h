#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RealmWorldListDownloadPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldListDownloadPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk653238;
    ::ll::UntypedStorage<4, 4>  mUnkccae90;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldListDownloadPayload& operator=(RealmWorldListDownloadPayload const&);
    RealmWorldListDownloadPayload(RealmWorldListDownloadPayload const&);
    RealmWorldListDownloadPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RealmWorldListDownloadPayload() /*override*/;
#else // LL_PLAT_C
    virtual ~RealmWorldListDownloadPayload() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
