#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ISyncStreamReader; }
// clang-format on

namespace Gameface {

class ISyncStreamReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISyncStreamReader();

    virtual ::cohtml::ISyncStreamReader* getCohtmlReader() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Gameface
