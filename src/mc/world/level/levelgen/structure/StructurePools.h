#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class FeatureRegistry;
class JigsawStructureRegistry;
class StructureManager;
// clang-format on

namespace br::worldgen {

class StructurePools {
public:
    // prevent constructor by default
    StructurePools& operator=(StructurePools const&);
    StructurePools(StructurePools const&);
    StructurePools();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bootstrap@StructurePools@worldgen@br@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVFeatureRegistry@@AEAVJigsawStructureRegistry@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    bootstrap(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class FeatureRegistry&, class JigsawStructureRegistry&, class BaseGameVersion const&, class Experiments const&);

    // NOLINTEND
};

}; // namespace br::worldgen
