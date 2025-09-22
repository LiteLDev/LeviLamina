#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

class EquipItemDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8178ec;
    ::ll::UntypedStorage<1, 1>  mUnk79dfb0;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipItemDefinition& operator=(EquipItemDefinition const&);
    EquipItemDefinition(EquipItemDefinition const&);
    EquipItemDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addExcludeItemByName(::ItemDescriptor const& itemDescriptor);
    // NOLINTEND
};
