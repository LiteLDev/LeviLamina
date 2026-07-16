#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DataStore; }
// clang-format on

namespace Bedrock {

class ApplicationDataStores : public ::Bedrock::IApplicationDataStores {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk25abfe;
    ::ll::UntypedStorage<8, 96> mUnkddf272;
    ::ll::UntypedStorage<8, 32> mUnk65c471;
    ::ll::UntypedStorage<1, 1>  mUnke3598c;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplicationDataStores& operator=(ApplicationDataStores const&);
    ApplicationDataStores(ApplicationDataStores const&);
    ApplicationDataStores();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ApplicationDataStores() /*override*/ = default;

    virtual void init() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
