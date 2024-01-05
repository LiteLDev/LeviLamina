#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace RepairableItemComponentVersioning {

class UpgradeTo118 : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo118& operator=(UpgradeTo118 const&);
    UpgradeTo118(UpgradeTo118 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UpgradeTo118@RepairableItemComponentVersioning@@UEAA@XZ
    virtual ~UpgradeTo118() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@UpgradeTo118@RepairableItemComponentVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@UpgradeTo118@RepairableItemComponentVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0UpgradeTo118@RepairableItemComponentVersioning@@QEAA@XZ
    MCAPI UpgradeTo118();

    // NOLINTEND
};

}; // namespace RepairableItemComponentVersioning
