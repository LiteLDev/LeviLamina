#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaBastionJigsawStructures {

public:
    // prevent constructor by default
    VanillaBastionJigsawStructures& operator=(VanillaBastionJigsawStructures const&) = delete;
    VanillaBastionJigsawStructures(VanillaBastionJigsawStructures const&)            = delete;
    VanillaBastionJigsawStructures()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?initialize\@VanillaBastionJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
    // NOLINTEND
};
