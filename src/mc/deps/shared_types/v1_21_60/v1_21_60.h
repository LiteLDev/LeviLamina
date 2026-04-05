#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct ComponentItemComponentData; }
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace SharedTypes::v1_21_60 { struct StorageItemComponent; }
// clang-format on

namespace SharedTypes::v1_21_60 {
// functions
// NOLINTBEGIN
MCFOLD bool operator==(
    ::SharedTypes::v1_21_60::ComponentItemComponentData const& __P0,
    ::SharedTypes::v1_21_60::ComponentItemComponentData const& __P1
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_60::CustomComponentsItemComponent const& __P0,
    ::SharedTypes::v1_21_60::CustomComponentsItemComponent const& __P1
);

#ifdef LL_PLAT_C
MCAPI bool operator==(
    ::SharedTypes::v1_21_60::StorageItemComponent const& __P0,
    ::SharedTypes::v1_21_60::StorageItemComponent const& __P1
);
#endif
// NOLINTEND

} // namespace SharedTypes::v1_21_60
