#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SubCategoryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk443596;
    ::ll::UntypedStorage<8, 32> mUnk983bca;
    ::ll::UntypedStorage<8, 32> mUnk826588;
    ::ll::UntypedStorage<8, 24> mUnka916a1;
    ::ll::UntypedStorage<1, 1>  mUnk16eaa9;
    // NOLINTEND

public:
    // prevent constructor by default
    SubCategoryDocument& operator=(SubCategoryDocument const&);
    SubCategoryDocument(SubCategoryDocument const&);
    SubCategoryDocument();
};

} // namespace persona
