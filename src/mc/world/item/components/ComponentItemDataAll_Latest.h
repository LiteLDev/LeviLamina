#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/BetaItemComponentData.h"
#include "mc/world/item/components/ComponentItemData_Legacy.h"
#include "mc/world/item/components/ComponentItemData_v1_21_90.h"
#include "mc/world/item/components/LegacyEventItemComponentData.h"

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2016, ::ComponentItemData_v1_21_90>                  mCerealData;
    ::ll::TypedStorage<1, 2, ::std::optional<::BetaItemComponentData>>         mBetaData;
    ::ll::TypedStorage<8, 192, ::ComponentItemData_Legacy>                     mLegacyData;
    ::ll::TypedStorage<8, 32, ::std::optional<::LegacyEventItemComponentData>> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataAll_Latest& operator=(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);

    MCAPI ~ComponentItemDataAll_Latest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
