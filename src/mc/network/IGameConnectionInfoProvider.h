#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
// clang-format on

namespace Social {

class IGameConnectionInfoProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameConnectionInfoProvider() = default;

    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const = 0;

    virtual ::std::optional<::std::string> getNetworkInfoString() const = 0;
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

} // namespace Social
