#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/core/IStorageInfoUpdater.h"

// auto generated forward declare list
// clang-format off
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace OreUI {

class StorageInfoUpdater : public ::OreUI::IStorageInfoUpdater {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update(
        bool&   supportsSizeQuery,
        uint64& storageSize,
        uint64& storageUsed,
        bool&   isStorageLow,
        bool&   isStorageFull
    ) /*override*/;

    virtual void addStateListener(::Core::StorageAreaStateListener* listener) /*override*/;

    virtual void removeStateListener(::Core::StorageAreaStateListener* listener) /*override*/;

    virtual ~StorageInfoUpdater() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $update(bool& supportsSizeQuery, uint64& storageSize, uint64& storageUsed, bool& isStorageLow, bool& isStorageFull);

    MCAPI void $addStateListener(::Core::StorageAreaStateListener* listener);

    MCAPI void $removeStateListener(::Core::StorageAreaStateListener* listener);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
