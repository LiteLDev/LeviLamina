#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"

namespace EquipmentSlotsMaps {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::array<char const*, 14> const& ENUM_TO_NAME();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::array<char const*, 14> const& ENUM_TO_NAME();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<uint64, ::SharedTypes::Legacy::EquipmentSlot> const& HASHED_NAME_TO_ENUM();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<uint64, ::SharedTypes::Legacy::EquipmentSlot> const& HASHED_NAME_TO_ENUM();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string, ::SharedTypes::Legacy::EquipmentSlot> const& NAME_TO_ENUM();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::SharedTypes::Legacy::EquipmentSlot> const& NAME_TO_ENUM();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string, ::SharedTypes::Legacy::SlotWithDropChance> const&
NBT_KEY_TO_SLOT_WITH_DROP_CHANCE();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::SharedTypes::Legacy::SlotWithDropChance> const&
NBT_KEY_TO_SLOT_WITH_DROP_CHANCE();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::array<::std::string, 6> const& SLOT_WITH_DROP_CHANCE_TO_NBT_KEY();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::array<::std::string, 6> const& SLOT_WITH_DROP_CHANCE_TO_NBT_KEY();
#endif
// NOLINTEND

} // namespace EquipmentSlotsMaps
