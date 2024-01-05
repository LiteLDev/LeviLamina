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
    // symbol: ?addDefinitionData@VolumeStorageDefinition@VolumeInstanceData@@QEBAXAEAVEntityContext@@@Z
    MCAPI void addDefinitionData(class EntityContext& entity) const;

    // symbol: ??1VolumeStorageDefinition@VolumeInstanceData@@QEAA@XZ
    MCAPI ~VolumeStorageDefinition();

    // symbol: ?bindType@VolumeStorageDefinition@VolumeInstanceData@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?fromEntity@VolumeStorageDefinition@VolumeInstanceData@@SA?AU12@AEBVEntityContext@@@Z
    MCAPI static struct VolumeInstanceData::VolumeStorageDefinition fromEntity(class EntityContext const& entity);

    // NOLINTEND
};

}; // namespace VolumeInstanceData
