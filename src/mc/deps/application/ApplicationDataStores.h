#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Bedrock { class DataStore; }
// clang-format on

namespace Bedrock {

class ApplicationDataStores : public ::Bedrock::IApplicationDataStores {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk25abfe;
    ::ll::UntypedStorage<8, 96> mUnkddf272;
    ::ll::UntypedStorage<8, 32> mUnk9c8278;
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
    virtual ~ApplicationDataStores() /*override*/;

    virtual void init() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ApplicationDataStores(::Bedrock::NotNullNonOwnerPtr<::AppPlatform> platform, ::std::string_view tag);

    MCNAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores which);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::AppPlatform> platform, ::std::string_view tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
    $getDataStore(::Bedrock::IApplicationDataStores::DataStores which);

    MCNAPI ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
    $getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
