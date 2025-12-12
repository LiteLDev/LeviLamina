#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct Content; }
// clang-format on

namespace Realms {

class IContentApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentApi() = default;

    virtual void applyContentOnRealm(
        ::Realms::RealmId const,
        ::std::vector<::Realms::Content> const&,
        ::std::function<void(::Realms::GenericStatus)>
    ) = 0;

    virtual void fetchAppliedPacks(
        ::Realms::RealmId const,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Content>)>
    ) = 0;

    virtual void checkForExistingPack(
        ::std::string const&,
        ::std::string const&,
        ::std::function<void(::Realms::GenericStatus, bool)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Realms
