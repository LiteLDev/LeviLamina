#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockExplosionResistanceVersioning {

class BlockExplosionResistance11910Upgrade {

public:
    // prevent constructor by default
    BlockExplosionResistance11910Upgrade& operator=(BlockExplosionResistance11910Upgrade const&) = delete;
    BlockExplosionResistance11910Upgrade(BlockExplosionResistance11910Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockExplosionResistance11910Upgrade\@BlockExplosionResistanceVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockExplosionResistance11910Upgrade\@BlockExplosionResistanceVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockExplosionResistance11910Upgrade\@BlockExplosionResistanceVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockExplosionResistance11910Upgrade(); // NOLINT
};

}; // namespace BlockExplosionResistanceVersioning
