#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCollisionVersioning {

class BlockCollision118Upgrade {

public:
    // prevent constructor by default
    BlockCollision118Upgrade& operator=(BlockCollision118Upgrade const&) = delete;
    BlockCollision118Upgrade(BlockCollision118Upgrade const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockCollision118Upgrade\@BlockCollisionVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockCollision118Upgrade\@BlockCollisionVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
    /**
     * @symbol ??0BlockCollision118Upgrade\@BlockCollisionVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockCollision118Upgrade(); // NOLINT
};

}; // namespace BlockCollisionVersioning
