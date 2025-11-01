#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace PackCommand {

struct DeduplicatePacksVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk36ccdf;
    // NOLINTEND

public:
    // prevent constructor by default
    DeduplicatePacksVisitor& operator=(DeduplicatePacksVisitor const&);
    DeduplicatePacksVisitor(DeduplicatePacksVisitor const&);
    DeduplicatePacksVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool tryVisit(::Pack const& pack);

    MCNAPI ~DeduplicatePacksVisitor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
