#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockTranformationVersioning {

class BlockTranformationVersioning11980Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRANFORMATIONVERSIONING_BLOCKTRANFORMATIONVERSIONING11980UPGRADE
public:
    BlockTranformationVersioning11980Upgrade& operator=(BlockTranformationVersioning11980Upgrade const&) = delete;
    BlockTranformationVersioning11980Upgrade(BlockTranformationVersioning11980Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockTranformationVersioning11980Upgrade\@BlockTranformationVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockTranformationVersioning11980Upgrade\@BlockTranformationVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockTranformationVersioning11980Upgrade\@BlockTranformationVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockTranformationVersioning11980Upgrade();
};

}; // namespace BlockTranformationVersioning
