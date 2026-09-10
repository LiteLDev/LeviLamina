#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on

namespace Bedrock::Profile::Whisker {

class MinecraftThreadQueryHelpers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk915216;
    ::ll::UntypedStorage<8, 184> mUnk8eac11;
    ::ll::UntypedStorage<8, 48>  mUnk74009f;
    ::ll::UntypedStorage<8, 24>  mUnkb5465f;
    ::ll::UntypedStorage<8, 24>  mUnkb42daf;
    ::ll::UntypedStorage<8, 16>  mUnkf4e29b;
    ::ll::UntypedStorage<8, 16>  mUnk349e12;
    ::ll::UntypedStorage<8, 16>  mUnk4706ba;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftThreadQueryHelpers& operator=(MinecraftThreadQueryHelpers const&);
    MinecraftThreadQueryHelpers(MinecraftThreadQueryHelpers const&);
    MinecraftThreadQueryHelpers();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void fetchAll();

    MCNAPI void reconcileThreadDivergencesAndEnsureQueriesArePrepped(
        ::gsl::span<::std::string_view const> clientNames,
        ::gsl::span<::std::string_view const> serverNames,
        ::gsl::span<::std::string_view const> renderNames
    );

    MCNAPI ~MinecraftThreadQueryHelpers();
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

} // namespace Bedrock::Profile::Whisker
