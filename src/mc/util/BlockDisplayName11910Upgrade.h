#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDisplayNameVersioning {

class BlockDisplayName11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDisplayName11910Upgrade& operator=(BlockDisplayName11910Upgrade const&);
    BlockDisplayName11910Upgrade(BlockDisplayName11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEAA@XZ
    virtual ~BlockDisplayName11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@QEAA@XZ
    MCAPI BlockDisplayName11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockDisplayNameVersioning
