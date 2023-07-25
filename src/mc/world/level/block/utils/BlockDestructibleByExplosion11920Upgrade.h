#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockExplosionResistanceVersioning {

class BlockDestructibleByExplosion11920Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEXPLOSIONRESISTANCEVERSIONING_BLOCKDESTRUCTIBLEBYEXPLOSION11920UPGRADE
public:
    BlockDestructibleByExplosion11920Upgrade& operator=(BlockDestructibleByExplosion11920Upgrade const&) = delete;
    BlockDestructibleByExplosion11920Upgrade(BlockDestructibleByExplosion11920Upgrade const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockDestructibleByExplosion11920Upgrade\@BlockExplosionResistanceVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDestructibleByExplosion11920Upgrade();
};

}; // namespace BlockExplosionResistanceVersioning
