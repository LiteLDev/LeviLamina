#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaFeatures {
public:
    // prevent constructor by default
    VanillaFeatures& operator=(VanillaFeatures const&);
    VanillaFeatures(VanillaFeatures const&);
    VanillaFeatures();

public:
    // NOLINTBEGIN
    // symbol: ?registerFeatureTypes@VanillaFeatures@@SAXAEAVFeatureTypeFactory@@@Z
    MCAPI static void registerFeatureTypes(class FeatureTypeFactory& typeFactories);

    // symbol: ?registerFeatures@VanillaFeatures@@SAXAEAVFeatureRegistry@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    registerFeatures(class FeatureRegistry& registry, class BaseGameVersion const& baseGameVersion, class Experiments const&);

    // NOLINTEND
};
