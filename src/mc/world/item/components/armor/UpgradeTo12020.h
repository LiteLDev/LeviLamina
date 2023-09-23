#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace ArmorItemComponentVersioning {

class UpgradeTo12020 : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo12020& operator=(UpgradeTo12020 const&);
    UpgradeTo12020(UpgradeTo12020 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@UpgradeTo12020@ArmorItemComponentVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@UpgradeTo12020@ArmorItemComponentVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0UpgradeTo12020@ArmorItemComponentVersioning@@QEAA@XZ
    MCAPI UpgradeTo12020();

    // NOLINTEND
};

}; // namespace ArmorItemComponentVersioning
