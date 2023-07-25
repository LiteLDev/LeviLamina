#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockAimCollision11910Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXVERSIONING_BLOCKAIMCOLLISION11910UPGRADE
public:
    BlockAimCollision11910Upgrade& operator=(BlockAimCollision11910Upgrade const&) = delete;
    BlockAimCollision11910Upgrade(BlockAimCollision11910Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockAimCollision11910Upgrade\@BlockSelectionBoxVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockAimCollision11910Upgrade\@BlockSelectionBoxVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockAimCollision11910Upgrade\@BlockSelectionBoxVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockAimCollision11910Upgrade();
};

}; // namespace BlockSelectionBoxVersioning
