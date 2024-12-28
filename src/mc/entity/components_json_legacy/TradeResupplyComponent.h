#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class TradeResupplyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke42fd5;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeResupplyComponent& operator=(TradeResupplyComponent const&);
    TradeResupplyComponent(TradeResupplyComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeResupplyComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void reloadComponent(::Actor& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
