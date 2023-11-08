#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDescriptionVersioning {

class BlockDescription11940Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDescription11940Upgrade& operator=(BlockDescription11940Upgrade const&);
    BlockDescription11940Upgrade(BlockDescription11940Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDescription11940Upgrade@BlockDescriptionVersioning@@UEAA@XZ
    virtual ~BlockDescription11940Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDescription11940Upgrade@BlockDescriptionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDescription11940Upgrade@BlockDescriptionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockDescription11940Upgrade@BlockDescriptionVersioning@@QEAA@XZ
    MCAPI BlockDescription11940Upgrade();

    // NOLINTEND
};

}; // namespace BlockDescriptionVersioning
