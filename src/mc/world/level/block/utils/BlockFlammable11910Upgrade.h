#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockFlammableVersioning {

class BlockFlammable11910Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFLAMMABLEVERSIONING_BLOCKFLAMMABLE11910UPGRADE
public:
    BlockFlammable11910Upgrade& operator=(BlockFlammable11910Upgrade const&) = delete;
    BlockFlammable11910Upgrade(BlockFlammable11910Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockFlammable11910Upgrade\@BlockFlammableVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockFlammable11910Upgrade\@BlockFlammableVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockFlammable11910Upgrade\@BlockFlammableVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockFlammable11910Upgrade();
};

}; // namespace BlockFlammableVersioning
