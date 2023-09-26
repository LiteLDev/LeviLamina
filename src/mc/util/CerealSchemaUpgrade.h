#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealSchemaUpgrade {
public:
    // prevent constructor by default
    CerealSchemaUpgrade& operator=(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const = 0;

    // vIndex: 2, symbol:
    // ?upgradeToNext@CerealSchemaUpgrade@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??1CerealSchemaUpgrade@@UEAA@XZ
    MCVAPI ~CerealSchemaUpgrade();

    // symbol:
    // ??0CerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);

    // symbol:
    // ?bindLegacySchema@CerealSchemaUpgrade@@QEAAXAEAVSchemaFactory@cereal@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void bindLegacySchema(class cereal::SchemaFactory&, std::string const&);

    // symbol: ?getTargetVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& getTargetVersion() const;

    // symbol:
    // ?registerLegacySchema@CerealSchemaUpgrade@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI void registerLegacySchema(std::string const&, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
