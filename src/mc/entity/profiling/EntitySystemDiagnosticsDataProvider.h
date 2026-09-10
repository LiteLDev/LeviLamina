#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke88005;
    ::ll::UntypedStorage<8, 8>  mUnk96a950;
    ::ll::UntypedStorage<8, 64> mUnk6f119a;
    ::ll::UntypedStorage<8, 64> mUnkec4685;
    ::ll::UntypedStorage<8, 64> mUnk5faa59;
    ::ll::UntypedStorage<8, 64> mUnkbfe0b5;
    ::ll::UntypedStorage<8, 64> mUnk3896ba;
    ::ll::UntypedStorage<8, 64> mUnk673ec4;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticsDataProvider& operator=(EntitySystemDiagnosticsDataProvider const&);
    EntitySystemDiagnosticsDataProvider(EntitySystemDiagnosticsDataProvider const&);
    EntitySystemDiagnosticsDataProvider();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EntitySystemDiagnosticsDataProvider();
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

} // namespace ECS::Profiling::Diagnostics
