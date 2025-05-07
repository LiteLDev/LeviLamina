#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

class IWorldApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldApi() = default;

    // vIndex: 1
    virtual void
    initializeWorld(::Realms::RealmId, ::std::string const&, ::std::string const&, ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)>) = 0;

    // vIndex: 2
    virtual void
        openWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) = 0;

    // vIndex: 3
    virtual void
        closeWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) = 0;

    // vIndex: 4
    virtual void
        resetWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Realms
