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

    MCAPI ItemCerealSchemaUpgrade(
        class SemVersion   targetVersion,
        std::string const& mSchemaKey,
        std::string const& mJsonMemberName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
