#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockExplosionResistanceVersioning {

class BlockDestructibleByExplosion11920Upgrade {

public:
    // prevent constructor by default
    BlockDestructibleByExplosion11920Upgrade& operator=(BlockDestructibleByExplosion11920Upgrade const&) = delete;
    BlockDestructibleByExplosion11920Upgrade(BlockDestructibleByExplosion11920Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDestructibleByExplosion11920Upgrade(); // NOLINT
};

}; // namespace BlockExplosionResistanceVersioning
