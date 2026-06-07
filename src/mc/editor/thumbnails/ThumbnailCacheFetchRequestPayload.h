#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

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
    virtual ~ThumbnailCacheFetchRequestPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThumbnailCacheFetchRequestPayload(::mce::UUID const& id, uint hash);
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
    MCNAPI void* $ctor(::mce::UUID const& id, uint hash);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
