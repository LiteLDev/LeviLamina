#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VolumeInstanceData {

struct VolumeStorageDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEINSTANCEDATA_VOLUMESTORAGEDEFINITION
public:
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&) = delete;
    VolumeStorageDefinition(VolumeStorageDefinition const&)            = delete;
    VolumeStorageDefinition()                                          = delete;
#endif

public:
    /**
     * @symbol ?addDefinitionData\@VolumeStorageDefinition\@VolumeInstanceData\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void addDefinitionData(class EntityContext&) const;
    /**
     * @symbol ??1VolumeStorageDefinition\@VolumeInstanceData\@\@QEAA\@XZ
     */
    MCAPI ~VolumeStorageDefinition();
    /**
     * @symbol ?bindType\@VolumeStorageDefinition\@VolumeInstanceData\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?fromEntity\@VolumeStorageDefinition\@VolumeInstanceData\@\@SA?AU12\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static struct VolumeInstanceData::VolumeStorageDefinition fromEntity(class EntityContext const&);
};

}; // namespace VolumeInstanceData
