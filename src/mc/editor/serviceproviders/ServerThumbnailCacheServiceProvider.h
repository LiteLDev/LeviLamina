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
    virtual ~ServerThumbnailCacheServiceProvider();

    virtual bool remove(::mce::UUID id, ::std::optional<uint> hash) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
