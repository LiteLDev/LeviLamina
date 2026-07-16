#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ThumbnailFileBytes; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

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
    virtual ~ThumbnailCacheStorePayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThumbnailCacheStorePayload(::mce::UUID const& id, uint hash, ::Editor::ThumbnailFileBytes const& data);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::mce::UUID const& id, uint hash, ::Editor::ThumbnailFileBytes const& data);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
