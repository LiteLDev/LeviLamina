#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerThumbnailCacheServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ServerThumbnailCacheServiceProvider() = default;
#else // LL_PLAT_C
    virtual ~ServerThumbnailCacheServiceProvider();
#endif

    virtual bool remove(::mce::UUID id, ::std::optional<uint> hash) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Services
