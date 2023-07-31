#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLightEmissionVersioning {

class BlockLightEmission11910Upgrade {

public:
    // prevent constructor by default
    BlockLightEmission11910Upgrade& operator=(BlockLightEmission11910Upgrade const&) = delete;
    BlockLightEmission11910Upgrade(BlockLightEmission11910Upgrade const&)            = delete;

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
     * ?previousSchema\@BlockLightEmission11910Upgrade\@BlockLightEmissionVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockLightEmission11910Upgrade\@BlockLightEmissionVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockLightEmission11910Upgrade\@BlockLightEmissionVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockLightEmission11910Upgrade();
    // NOLINTEND
};

}; // namespace BlockLightEmissionVersioning
