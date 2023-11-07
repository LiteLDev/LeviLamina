#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockBreathabilityVersioning {

class BlockBreathability11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockBreathability11910Upgrade& operator=(BlockBreathability11910Upgrade const&);
    BlockBreathability11910Upgrade(BlockBreathability11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockBreathability11910Upgrade@@@UEAA@XZ
    virtual ~BlockBreathability11910Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@QEAA@XZ
    MCAPI BlockBreathability11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockBreathabilityVersioning
