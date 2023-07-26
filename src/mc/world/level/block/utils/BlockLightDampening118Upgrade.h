#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLightDampeningVersioning {

class BlockLightDampening118Upgrade {

public:
    // prevent constructor by default
    BlockLightDampening118Upgrade& operator=(BlockLightDampening118Upgrade const&) = delete;
    BlockLightDampening118Upgrade(BlockLightDampening118Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockLightDampening118Upgrade\@BlockLightDampeningVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockLightDampening118Upgrade\@BlockLightDampeningVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockLightDampening118Upgrade\@BlockLightDampeningVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockLightDampening118Upgrade(); // NOLINT
};

}; // namespace BlockLightDampeningVersioning
