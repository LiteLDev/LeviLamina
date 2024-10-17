#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealSchemaUpgradeSet {
public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet();

public:
    // NOLINTBEGIN
    MCAPI bool forEach(std::function<bool(std::shared_ptr<class CerealSchemaUpgrade>)> functor);

    MCAPI ~CerealSchemaUpgradeSet();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
