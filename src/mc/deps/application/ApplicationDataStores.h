#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DataStore; }
namespace Bedrock { class IApplicationDataStores; }
// clang-format on

namespace Bedrock {

class ApplicationDataStores : public ::Bedrock::IApplicationDataStores {
public:
    // prevent constructor by default
    ApplicationDataStores& operator=(ApplicationDataStores const&);
    ApplicationDataStores(ApplicationDataStores const&);
    ApplicationDataStores();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ApplicationDataStores() = default;

    // vIndex: 1
    virtual void init();

    // vIndex: 2
    virtual class Bedrock::NonOwnerPointer<class Bedrock::DataStore>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which);

    // vIndex: 3
    virtual class Bedrock::NonOwnerPointer<class Bedrock::DataStore const>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores which);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore>
    getDataStore$(::Bedrock::IApplicationDataStores::DataStores which);

    MCAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore const>
    getDataStore$(::Bedrock::IApplicationDataStores::DataStores which) const;

    MCAPI void init$();

    // NOLINTEND
};

}; // namespace Bedrock
