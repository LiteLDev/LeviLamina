#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
// clang-format on

class FeatureLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk12e46a;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureLoader& operator=(FeatureLoader const&);
    FeatureLoader(FeatureLoader const&);
    FeatureLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureLoader(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );
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
