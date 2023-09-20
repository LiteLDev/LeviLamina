/**
 * @file  FeatureTypeFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureTypeFactory.
 *
 */
class FeatureTypeFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETYPEFACTORY
public:
    class FeatureTypeFactory& operator=(class FeatureTypeFactory const &) = delete;
    FeatureTypeFactory(class FeatureTypeFactory const &) = delete;
#endif

public:
    /**
     * @symbol ??0FeatureTypeFactory\@\@QEAA\@XZ
     */
    MCAPI FeatureTypeFactory();
    /**
     * @symbol ?processFeature\@FeatureTypeFactory\@\@QEBA_NAEAVIWorldRegistriesProvider\@\@_NAEBVResourcePackManager\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool processFeature(class IWorldRegistriesProvider &, bool, class ResourcePackManager const &, std::string const &, class Json::Value const &, class SemVersion const &) const;

};
