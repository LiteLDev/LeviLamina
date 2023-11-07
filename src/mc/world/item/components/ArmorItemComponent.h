#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ArmorItemComponent {
public:
    // prevent constructor by default
    ArmorItemComponent& operator=(ArmorItemComponent const&);
    ArmorItemComponent(ArmorItemComponent const&);
    ArmorItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ArmorItemComponent@@UEAA@XZ
    virtual ~ArmorItemComponent() = default;

    // symbol:
    // ?bindType@ArmorItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ArmorItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?registerVersionUpgrades@ArmorItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // NOLINTEND
};
