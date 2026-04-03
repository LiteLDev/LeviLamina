#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::Poi { struct RegionRegistry; }
// clang-format on

namespace Poi {

struct FileStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdacbec;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStorage& operator=(FileStorage const&);
    FileStorage(FileStorage const&);
    FileStorage();
};

} // namespace Poi
