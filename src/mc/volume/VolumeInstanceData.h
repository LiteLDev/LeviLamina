#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VolumeInstanceData { struct VolumeStorageDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace VolumeInstanceData {
// NOLINTBEGIN
MCAPI void bindVolumeStorageType(struct cereal::ReflectionCtx&);

MCAPI void
deserialize(std::string const&, class CompoundTag const&, class EntityContext&, struct cereal::ReflectionCtx const&);

MCAPI std::string const& getIdentifier(class CompoundTag const&);

MCAPI class CompoundTag serialize(class EntityContext const&, struct cereal::ReflectionCtx const&);
// NOLINTEND

}; // namespace VolumeInstanceData
