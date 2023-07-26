#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDisplayNameVersioning {

class BlockDisplayName11930Upgrade {

public:
    // prevent constructor by default
    BlockDisplayName11930Upgrade& operator=(BlockDisplayName11930Upgrade const&) = delete;
    BlockDisplayName11930Upgrade(BlockDisplayName11930Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockDisplayName11930Upgrade\@BlockDisplayNameVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDisplayName11930Upgrade\@BlockDisplayNameVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockDisplayName11930Upgrade\@BlockDisplayNameVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDisplayName11930Upgrade(); // NOLINT
};

}; // namespace BlockDisplayNameVersioning
