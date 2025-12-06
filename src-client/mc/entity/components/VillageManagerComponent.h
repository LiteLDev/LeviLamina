#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IVillageManager;
// clang-format on

struct VillageManagerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 24, ::std::vector<::std::pair<::DimensionType, ::Bedrock::NonOwnerPointer<::IVillageManager>>>>
            mVillageManagers;
    // NOLINTEND
};
