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
namespace Puv { struct Input; }
// clang-format on

class FeatureLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::Puv::Loader<::FeatureResult>> mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureLoader(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );

    MCAPI ::Puv::LoadResult<::FeatureResult> load(::Puv::Input const& input) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );
    // NOLINTEND
};
