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

class BlockDisplayName11930Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDisplayName11930Upgrade& operator=(BlockDisplayName11930Upgrade const&);
    BlockDisplayName11930Upgrade(BlockDisplayName11930Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDisplayName11930Upgrade@BlockDisplayNameVersioning@@UEAA@XZ
    virtual ~BlockDisplayName11930Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDisplayName11930Upgrade@BlockDisplayNameVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDisplayName11930Upgrade@BlockDisplayNameVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockDisplayName11930Upgrade@BlockDisplayNameVersioning@@QEAA@XZ
    MCAPI BlockDisplayName11930Upgrade();

    // NOLINTEND
};

}; // namespace BlockDisplayNameVersioning
