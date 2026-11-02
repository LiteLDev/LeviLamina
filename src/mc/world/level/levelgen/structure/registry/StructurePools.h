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

struct StructurePools {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bootstrap(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
        ::FeatureRegistry&                                featureRegistry,
        ::JigsawStructureRegistry&                        jigsawStructureRegistry,
        ::BaseGameVersion const&                          baseGameVersion,
        ::Experiments const&                              experiments
    );
    // NOLINTEND
};

} // namespace br::worldgen
