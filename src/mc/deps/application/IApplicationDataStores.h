#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DataStore; }
// clang-format on

namespace Bedrock {

class IApplicationDataStores : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IApplicationDataStores inner types define
    enum class DataStores : int {
        GlobalSettings    = 0,
        UserSettings      = 1,
        BootstrapSettings = 2,
        Count             = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IApplicationDataStores() /*override*/;

    virtual void init() = 0;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) = 0;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
