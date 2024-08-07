#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace VolumeInstanceData {

struct VolumeStorageDefinition {
public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addDefinitionData(class EntityContext& entity) const;

    MCAPI ~VolumeStorageDefinition();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static struct VolumeInstanceData::VolumeStorageDefinition fromEntity(class EntityContext const& entity);

    // NOLINTEND
};

}; // namespace VolumeInstanceData
