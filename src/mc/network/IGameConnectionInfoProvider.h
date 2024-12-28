#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
// clang-format on

namespace Social {

class IGameConnectionInfoProvider {
public:
    // prevent constructor by default
    IGameConnectionInfoProvider& operator=(IGameConnectionInfoProvider const&);
    IGameConnectionInfoProvider(IGameConnectionInfoProvider const&);
    IGameConnectionInfoProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameConnectionInfoProvider();

    // vIndex: 1
    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
