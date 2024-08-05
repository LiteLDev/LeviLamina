#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FeatureTypeFactory {
public:
    // prevent constructor by default
    FeatureTypeFactory& operator=(FeatureTypeFactory const&);
    FeatureTypeFactory(FeatureTypeFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FeatureTypeFactory() = default;

    MCAPI FeatureTypeFactory();

    MCAPI bool
    processFeature(class IWorldRegistriesProvider&, bool, class ResourcePackManager const&, std::string const&, class Json::Value const&, class SemVersion const&)
        const;

    // NOLINTEND
};
