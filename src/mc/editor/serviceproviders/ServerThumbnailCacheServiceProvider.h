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
    virtual ~ServerThumbnailCacheServiceProvider() = default;

    virtual bool remove(::mce::UUID id, ::std::optional<uint> hash) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
