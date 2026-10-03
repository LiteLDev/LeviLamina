#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class LevelCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 848, ::LevelSummary>                            summary;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelData>> data;
    ::ll::TypedStorage<1, 1, bool>                                        dirtySummary;
    ::ll::TypedStorage<1, 1, bool>                                        isPartiallyCopied;
    ::ll::TypedStorage<1, 1, bool>                                        isLevelDataInvalid;
    // NOLINTEND
};
