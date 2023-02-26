/**
 * @file  VanillaFeatures.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaFeatures.
 *
 */
class VanillaFeatures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAFEATURES
public:
    class VanillaFeatures& operator=(class VanillaFeatures const &) = delete;
    VanillaFeatures(class VanillaFeatures const &) = delete;
    VanillaFeatures() = delete;
#endif

public:
    /**
     * @symbol  ?registerFeatureTypes\@VanillaFeatures\@\@SAXAEAVFeatureTypeFactory\@\@\@Z
     */
    MCAPI static void registerFeatureTypes(class FeatureTypeFactory &);
    /**
     * @symbol  ?registerFeatures\@VanillaFeatures\@\@SAXAEAVFeatureRegistry\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void registerFeatures(class FeatureRegistry &, class BaseGameVersion const &, class Experiments const &);

};