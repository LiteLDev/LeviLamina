#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBiomeJsonDocumentHelper {

struct ComponentMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf3ea7c;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentMap& operator=(ComponentMap const&);
    ComponentMap(ComponentMap const&);
    ComponentMap();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ComponentMap();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ClientBiomeJsonDocumentHelper
