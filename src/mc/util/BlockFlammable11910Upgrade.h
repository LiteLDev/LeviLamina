#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockFlammableVersioning {

class BlockFlammable11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockFlammable11910Upgrade& operator=(BlockFlammable11910Upgrade const&);
    BlockFlammable11910Upgrade(BlockFlammable11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockFlammable11910Upgrade@@@UEAA@XZ
    virtual ~BlockFlammable11910Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockFlammable11910Upgrade@BlockFlammableVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockFlammable11910Upgrade@BlockFlammableVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockFlammable11910Upgrade@BlockFlammableVersioning@@QEAA@XZ
    MCAPI BlockFlammable11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockFlammableVersioning
