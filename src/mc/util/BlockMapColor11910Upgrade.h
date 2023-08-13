#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockMapColorVersioning {

class BlockMapColor11910Upgrade : public ::CerealSchemaUpgrade {

public:
    // prevent constructor by default
    BlockMapColor11910Upgrade& operator=(BlockMapColor11910Upgrade const&) = delete;
    BlockMapColor11910Upgrade(BlockMapColor11910Upgrade const&)            = delete;

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
     * ?previousSchema\@BlockMapColor11910Upgrade\@BlockMapColorVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockMapColor11910Upgrade\@BlockMapColorVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockMapColor11910Upgrade\@BlockMapColorVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockMapColor11910Upgrade();
    // NOLINTEND
};

}; // namespace BlockMapColorVersioning
