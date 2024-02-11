#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

class ItemCerealSchemaUpgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    ItemCerealSchemaUpgrade& operator=(ItemCerealSchemaUpgrade const&);
    ItemCerealSchemaUpgrade(ItemCerealSchemaUpgrade const&);
    ItemCerealSchemaUpgrade();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemCerealSchemaUpgrade@@UEAA@XZ
    virtual ~ItemCerealSchemaUpgrade();

    // symbol:
    // ??0ItemCerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI ItemCerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);

    // NOLINTEND
};
