#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class PieceOfferWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk77162d;
    ::ll::UntypedStorage<8, 8> mUnk48fae0;
    // NOLINTEND

public:
    // prevent constructor by default
    PieceOfferWrapper& operator=(PieceOfferWrapper const&);
    PieceOfferWrapper(PieceOfferWrapper const&);
    PieceOfferWrapper();
};

} // namespace persona
