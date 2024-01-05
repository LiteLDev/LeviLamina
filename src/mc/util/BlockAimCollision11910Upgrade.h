#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockAimCollision11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockAimCollision11910Upgrade& operator=(BlockAimCollision11910Upgrade const&);
    BlockAimCollision11910Upgrade(BlockAimCollision11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockAimCollision11910Upgrade@BlockSelectionBoxVersioning@@UEAA@XZ
    virtual ~BlockAimCollision11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockAimCollision11910Upgrade@BlockSelectionBoxVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockAimCollision11910Upgrade@BlockSelectionBoxVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0BlockAimCollision11910Upgrade@BlockSelectionBoxVersioning@@QEAA@XZ
    MCAPI BlockAimCollision11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockSelectionBoxVersioning
