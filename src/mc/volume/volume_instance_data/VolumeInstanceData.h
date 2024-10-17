#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VolumeInstanceData { struct VolumeStorageDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace VolumeInstanceData {
// NOLINTBEGIN
MCAPI void bindVolumeStorageType(struct cereal::ReflectionCtx& ctx);

MCAPI void deserialize(
    std::string const&                  key,
    class CompoundTag const&            tag,
    class EntityContext&                volume,
    struct cereal::ReflectionCtx const& ctx
);

MCAPI std::string const& getIdentifier(class CompoundTag const& tag);

MCAPI class CompoundTag serialize(class EntityContext const& volume, struct cereal::ReflectionCtx const& ctx);
// NOLINTEND

}; // namespace VolumeInstanceData
