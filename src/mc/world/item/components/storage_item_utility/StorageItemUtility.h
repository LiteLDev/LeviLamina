#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
class ItemStackBase;
class SaveContext;
struct FullContainerName;
namespace StorageItemUtility { class StorageItemWeightData; }
// clang-format on

namespace StorageItemUtility {
// functions
// NOLINTBEGIN
MCAPI int getItemWeightInStorageItem(::ItemStackBase const& item, ::std::optional<uchar> amount);

MCAPI ::std::optional<::FullContainerName> getStorageItemID(::ItemStackBase const& storageItem);

MCAPI ::std::optional<::StorageItemUtility::StorageItemWeightData>
getStorageItemWeightDataServer(::ItemStackBase const& item);

MCAPI void removeSerializedContainerIDs(::ItemStack& item);

MCAPI ::std::unique_ptr<::CompoundTag> saveDataFixupBySaveContext(
    ::std::unique_ptr<::CompoundTag> tag,
    ::SaveContext const&             saveContext,
    ::ItemStackBase const&           item
);

MCAPI void tryFlattenStorageItem(::ItemStackBase& item);

MCAPI void tryRemoveStorageItemContentData(::ItemStackBase& item);
// NOLINTEND

} // namespace StorageItemUtility
