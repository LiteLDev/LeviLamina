#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace persona::color {

class SwatchList : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc236b2;
    // NOLINTEND

public:
    // prevent constructor by default
    SwatchList& operator=(SwatchList const&);
    SwatchList(SwatchList const&);
    SwatchList();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwatchList() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona::color
