#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

class BlockCerealSchemaUpgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCerealSchemaUpgrade& operator=(BlockCerealSchemaUpgrade const&);
    BlockCerealSchemaUpgrade(BlockCerealSchemaUpgrade const&);
    BlockCerealSchemaUpgrade();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockCerealSchemaUpgrade@@UEAA@XZ
    virtual ~BlockCerealSchemaUpgrade();

    // symbol:
    // ??0BlockCerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI BlockCerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);

    // NOLINTEND
};
