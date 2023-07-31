#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11910Upgrade {

public:
    // prevent constructor by default
    BlockDestructibleByMining11910Upgrade& operator=(BlockDestructibleByMining11910Upgrade const&) = delete;
    BlockDestructibleByMining11910Upgrade(BlockDestructibleByMining11910Upgrade const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockDestructibleByMining11910Upgrade\@BlockDestroyTimeVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDestructibleByMining11910Upgrade\@BlockDestroyTimeVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockDestructibleByMining11910Upgrade\@BlockDestroyTimeVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDestructibleByMining11910Upgrade();
    // NOLINTEND
};

}; // namespace BlockDestroyTimeVersioning
