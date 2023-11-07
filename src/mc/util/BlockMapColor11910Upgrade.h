#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockMapColorVersioning {

class BlockMapColor11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockMapColor11910Upgrade& operator=(BlockMapColor11910Upgrade const&);
    BlockMapColor11910Upgrade(BlockMapColor11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockMapColor11910Upgrade@@@UEAA@XZ
    virtual ~BlockMapColor11910Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockMapColor11910Upgrade@BlockMapColorVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockMapColor11910Upgrade@BlockMapColorVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockMapColor11910Upgrade@BlockMapColorVersioning@@QEAA@XZ
    MCAPI BlockMapColor11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockMapColorVersioning
