#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

struct SafetyServiceTextFilteringConfig {
public:
    // SafetyServiceTextFilteringConfig inner types declare
    // clang-format off
    struct FloodingThresholds;
    // clang-format on

    // SafetyServiceTextFilteringConfig inner types define
    struct FloodingThresholds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcdbf3f;
        ::ll::UntypedStorage<4, 4> mUnk6edeb3;
        // NOLINTEND

    public:
        // prevent constructor by default
        FloodingThresholds& operator=(FloodingThresholds const&);
        FloodingThresholds(FloodingThresholds const&);
        FloodingThresholds();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkca2fbe;
    ::ll::UntypedStorage<4, 8>  mUnkf9977a;
    ::ll::UntypedStorage<4, 4>  mUnk3d5624;
    ::ll::UntypedStorage<4, 4>  mUnk7b6c8c;
    ::ll::UntypedStorage<1, 1>  mUnk4d356a;
    ::ll::UntypedStorage<1, 1>  mUnkc7694c;
    ::ll::UntypedStorage<1, 1>  mUnkd827fc;
    ::ll::UntypedStorage<8, 32> mUnkea80d7;
    ::ll::UntypedStorage<8, 32> mUnkb7ca54;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI SafetyServiceTextFilteringConfig();

    MCNAPI SafetyServiceTextFilteringConfig(::Safety::SafetyServiceTextFilteringConfig const&);

    MCNAPI ::Safety::SafetyServiceTextFilteringConfig& operator=(::Safety::SafetyServiceTextFilteringConfig&&);

    MCNAPI ~SafetyServiceTextFilteringConfig();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::Safety::SafetyServiceTextFilteringConfig
    deprecated_createConfigFromJson(::std::string const& configJson);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Safety::SafetyServiceTextFilteringConfig const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Safety
