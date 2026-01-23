#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
// clang-format on

class CerealSchemaUpgradeSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka33e81;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool forEach(::std::function<bool(::std::shared_ptr<::CerealSchemaUpgrade>)> functor);

    MCNAPI ~CerealSchemaUpgradeSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
