#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ContainerManagerController;
class ItemStackBase;
class SaveContext;
struct FullContainerName;
namespace StorageItemUtility { class StorageItemWeightData; }
// clang-format on

namespace StorageItemUtility {
// functions
// NOLINTBEGIN
MCAPI void _tryFlattenStorageItem(::ItemStackBase& item, ::SaveContext const& context);

MCAPI int getItemWeightInStorageItem(::ItemStackBase const& item, ::std::optional<uchar> amount);

MCAPI ::std::optional<::FullContainerName> getStorageItemID(::ItemStackBase const& storageItem);

MCAPI_C ::std::optional<::StorageItemUtility::StorageItemWeightData>
getStorageItemWeightDataClient(::ItemStackBase const& item, ::ContainerManagerController& containerManagerController);

MCAPI ::std::optional<::StorageItemUtility::StorageItemWeightData>
getStorageItemWeightDataServer(::ItemStackBase const& item);

MCAPI ::std::unique_ptr<::CompoundTag> saveDataFixupBySaveContext(
    ::std::unique_ptr<::CompoundTag> tag,
    ::SaveContext const&             saveContext,
    ::ItemStackBase const&           item
);

MCAPI void tryFlattenStorageItem(::ItemStackBase& item);

MCAPI void tryMoveStorageItem(::ItemStackBase& item);
// NOLINTEND

} // namespace StorageItemUtility
