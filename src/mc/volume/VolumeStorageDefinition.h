#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace VolumeInstanceData {

struct VolumeStorageDefinition {

public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&) = delete;
    VolumeStorageDefinition(VolumeStorageDefinition const&)            = delete;
    VolumeStorageDefinition()                                          = delete;

public:
    /**
     * @symbol ?addDefinitionData\@VolumeStorageDefinition\@VolumeInstanceData\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void addDefinitionData(class EntityContext&) const; // NOLINT
    /**
     * @symbol ??1VolumeStorageDefinition\@VolumeInstanceData\@\@QEAA\@XZ
     */
    MCAPI ~VolumeStorageDefinition(); // NOLINT
    /**
     * @symbol ?bindType\@VolumeStorageDefinition\@VolumeInstanceData\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?fromEntity\@VolumeStorageDefinition\@VolumeInstanceData\@\@SA?AU12\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static struct VolumeInstanceData::VolumeStorageDefinition fromEntity(class EntityContext const&); // NOLINT
};

}; // namespace VolumeInstanceData
