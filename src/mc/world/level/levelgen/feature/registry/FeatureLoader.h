#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
struct FeatureResult;
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
namespace Puv { class Input; }
// clang-format on

class FeatureLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::Puv::Loader<::FeatureResult, ::FeatureResult>> mLoader;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    FeatureLoader();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI FeatureLoader(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );

    MCAPI ::Puv::LoadResult<::FeatureResult> load(::Puv::Input const& input) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );
#endif
    // NOLINTEND
};
