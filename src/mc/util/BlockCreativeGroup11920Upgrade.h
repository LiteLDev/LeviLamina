#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCreativeGroupVersioning {

class BlockCreativeGroup11920Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCreativeGroup11920Upgrade& operator=(BlockCreativeGroup11920Upgrade const&);
    BlockCreativeGroup11920Upgrade(BlockCreativeGroup11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@QEAA@XZ
    MCAPI BlockCreativeGroup11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockCreativeGroupVersioning
