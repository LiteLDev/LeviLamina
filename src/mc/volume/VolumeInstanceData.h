#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VolumeInstanceData { struct VolumeStorageDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace VolumeInstanceData {
// NOLINTBEGIN
// symbol: ?bindVolumeStorageType@VolumeInstanceData@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindVolumeStorageType(struct cereal::ReflectionCtx&);

// symbol:
// ?deserialize@VolumeInstanceData@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVEntityContext@@AEBUReflectionCtx@cereal@@@Z
MCAPI void
deserialize(std::string const&, class CompoundTag const&, class EntityContext&, struct cereal::ReflectionCtx const&);

// symbol:
// ?getIdentifier@VolumeInstanceData@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
MCAPI std::string const& getIdentifier(class CompoundTag const&);

// symbol: ?serialize@VolumeInstanceData@@YA?AVCompoundTag@@AEBVEntityContext@@AEBUReflectionCtx@cereal@@@Z
MCAPI class CompoundTag serialize(class EntityContext const&, struct cereal::ReflectionCtx const&);
// NOLINTEND

}; // namespace VolumeInstanceData
