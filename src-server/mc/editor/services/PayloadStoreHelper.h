#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc52f22;
    ::ll::UntypedStorage<8, 24> mUnk47c2ce;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadStoreHelper& operator=(PayloadStoreHelper const&);
    PayloadStoreHelper(PayloadStoreHelper const&);
    PayloadStoreHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PayloadStoreHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
