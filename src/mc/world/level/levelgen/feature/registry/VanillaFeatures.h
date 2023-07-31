#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaFeatures {

public:
    // prevent constructor by default
    VanillaFeatures& operator=(VanillaFeatures const&) = delete;
    VanillaFeatures(VanillaFeatures const&)            = delete;
    VanillaFeatures()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?registerFeatureTypes\@VanillaFeatures\@\@SAXAEAVFeatureTypeFactory\@\@\@Z
     */
    MCAPI static void registerFeatureTypes(class FeatureTypeFactory&);
    /**
     * @symbol
     * ?registerFeatures\@VanillaFeatures\@\@SAXAEAVFeatureRegistry\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void registerFeatures(class FeatureRegistry&, class BaseGameVersion const&, class Experiments const&);
    // NOLINTEND
};
