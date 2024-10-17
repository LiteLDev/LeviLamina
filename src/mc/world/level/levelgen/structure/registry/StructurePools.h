#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    MCAPI static void bootstrap(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      jigsawStructureRegistry,
        class BaseGameVersion const&                        baseGameVersion,
        class Experiments const&                            experiments
    );

    // NOLINTEND
};

}; // namespace br::worldgen
