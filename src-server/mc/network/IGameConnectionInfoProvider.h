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
    // vIndex: 0
    virtual ~IGameConnectionInfoProvider() = default;

    // vIndex: 1
    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const = 0;

    // vIndex: 2
    virtual ::std::optional<::std::string> getNetworkInfoString() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
