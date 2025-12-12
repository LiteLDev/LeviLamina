#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreSync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSyncClient : public ::Bedrock::DDUI::DataStoreSync {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void applyChanges(
        ::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const&
            changes
    ) /*override*/;

    virtual void assertAppropriateThread() const /*override*/;

    virtual ~DataStoreSyncClient() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $applyChanges(
        ::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const&
            changes
    );

    MCNAPI void $assertAppropriateThread() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
