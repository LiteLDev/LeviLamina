#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDescriptionVersioning {

class BlockDescription11940Upgrade {

public:
    // prevent constructor by default
    BlockDescription11940Upgrade& operator=(BlockDescription11940Upgrade const&) = delete;
    BlockDescription11940Upgrade(BlockDescription11940Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockDescription11940Upgrade\@BlockDescriptionVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDescription11940Upgrade\@BlockDescriptionVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockDescription11940Upgrade\@BlockDescriptionVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDescription11940Upgrade(); // NOLINT
};

}; // namespace BlockDescriptionVersioning
