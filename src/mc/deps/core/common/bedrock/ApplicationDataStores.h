#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IApplicationDataStores.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    // vIndex: 0, symbol: ??1ApplicationDataStores@@@UEAA@XZ
    virtual ~ApplicationDataStores();

    // vIndex: 1, symbol: ?init@ApplicationDataStores@Bedrock@@UEAAXXZ
    virtual void init();

    // symbol:
    // ?getDataStore@ApplicationDataStores@Bedrock@@UEBA?AV?$NonOwnerPointer@$$CBVDataStore@Bedrock@@@2@W4DataStores@IApplicationDataStores@2@@Z
    MCVAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore const>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores) const;

    // symbol:
    // ?getDataStore@ApplicationDataStores@Bedrock@@UEAA?AV?$NonOwnerPointer@VDataStore@Bedrock@@@2@W4DataStores@IApplicationDataStores@2@@Z
    MCVAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore>
        getDataStore(::Bedrock::IApplicationDataStores::DataStores);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initDataStore@ApplicationDataStores@Bedrock@@AEAAXW4DataStores@IApplicationDataStores@2@@Z
    MCAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores);

    // NOLINTEND
};

}; // namespace Bedrock
