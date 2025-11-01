#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

class IContentApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentApi() = default;

    // vIndex: 1
    virtual void applyContentOnRealm(::Realms::RealmId const, ::std::vector<::Realms::Content> const&, ::std::function<void(::Realms::GenericStatus)>) = 0;

    // vIndex: 2
    virtual void fetchAppliedPacks(::Realms::RealmId const, ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Content>)>) = 0;

    // vIndex: 3
    virtual void checkForExistingPack(::std::string const&, ::std::string const&, ::std::function<void(::Realms::GenericStatus, bool)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
