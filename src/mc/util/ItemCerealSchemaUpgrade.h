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
    // vIndex: 0
    virtual ~ItemCerealSchemaUpgrade();

    MCAPI ItemCerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);

    // NOLINTEND
};
