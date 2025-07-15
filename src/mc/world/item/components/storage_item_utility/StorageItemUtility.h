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
MCNAPI void _tryFlattenStorageItem(::ItemStackBase& item, ::SaveContext const& context);

MCNAPI int getItemWeightInStorageItem(::ItemStackBase const& item, ::std::optional<uchar> amount);

MCNAPI ::std::optional<::FullContainerName> getStorageItemID(::ItemStackBase const& storageItem);

MCNAPI ::std::optional<::StorageItemUtility::StorageItemWeightData>
getStorageItemWeightDataServer(::ItemStackBase const& item);

MCNAPI void removeSerializedContainerIDs(::ItemStack& item);

MCNAPI ::std::unique_ptr<::CompoundTag> saveDataFixupBySaveContext(
    ::std::unique_ptr<::CompoundTag> tag,
    ::SaveContext const&             saveContext,
    ::ItemStackBase const&           item
);

MCNAPI void tryFlattenStorageItem(::ItemStackBase& item);

MCNAPI void tryRemoveStorageItemContentData(::ItemStackBase& item);
// NOLINTEND

} // namespace StorageItemUtility
