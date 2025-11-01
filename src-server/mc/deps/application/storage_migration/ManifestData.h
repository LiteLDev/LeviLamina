#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct ManifestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdfea13;
    ::ll::UntypedStorage<8, 16> mUnk2b6c28;
    ::ll::UntypedStorage<8, 32> mUnk822995;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestData& operator=(ManifestData const&);
    ManifestData(ManifestData const&);
    ManifestData();

};

}
