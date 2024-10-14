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

    MCAPI bool processFeature(
        class IWorldRegistriesProvider&  lookupProvider,
        bool                             isBasePack,
        class ResourcePackManager const& rpm,
        std::string const&               expectedFeatureName,
        class Json::Value const&         featureData,
        class SemVersion const&          engineVersion
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
