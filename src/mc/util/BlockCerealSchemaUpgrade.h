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
    // vIndex: 0
    virtual ~BlockCerealSchemaUpgrade();

    MCAPI BlockCerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);

    // NOLINTEND
};
