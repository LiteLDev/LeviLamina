#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLightDampeningVersioning {

class BlockLightDampening11940Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightDampening11940Upgrade& operator=(BlockLightDampening11940Upgrade const&);
    BlockLightDampening11940Upgrade(BlockLightDampening11940Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockLightDampening11940Upgrade@@@UEAA@XZ
    virtual ~BlockLightDampening11940Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@QEAA@XZ
    MCAPI BlockLightDampening11940Upgrade();

    // NOLINTEND
};

}; // namespace BlockLightDampeningVersioning
