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
    // vIndex: 0
    virtual ~IApplicationDataStores() /*override*/;

    // vIndex: 1
    virtual void init() = 0;

    // vIndex: 3
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores
    ) = 0;

    // vIndex: 2
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
