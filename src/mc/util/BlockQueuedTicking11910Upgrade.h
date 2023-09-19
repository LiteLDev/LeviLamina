#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockQueuedTickingVersioning {

class BlockQueuedTicking11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockQueuedTicking11910Upgrade& operator=(BlockQueuedTicking11910Upgrade const&);
    BlockQueuedTicking11910Upgrade(BlockQueuedTicking11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@QEAA@XZ
    MCAPI BlockQueuedTicking11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockQueuedTickingVersioning
