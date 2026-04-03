#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct ManifestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5622a4;
    ::ll::UntypedStorage<8, 16> mUnkcd717f;
    ::ll::UntypedStorage<8, 32> mUnkddaa74;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestData& operator=(ManifestData const&);
    ManifestData(ManifestData const&);
    ManifestData();
};

} // namespace Bedrock::StorageMigration
