#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
// clang-format on

struct DefaultSystemTraits {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<::ComponentInfo> generateDetailedComponentInfo();
#endif

#ifdef LL_PLAT_S
    MCNAPI static ::std::vector<::ComponentInfo> generateDetailedComponentInfo();
#endif

#ifdef LL_PLAT_C
    MCNAPI static ::std::string generateName(::std::string_view name);
#endif

#ifdef LL_PLAT_S
    MCNAPI static ::std::string generateName(::std::string_view name);
#endif
    // NOLINTEND
};
