#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FeatureTypeFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETYPEFACTORY
public:
    FeatureTypeFactory& operator=(FeatureTypeFactory const&) = delete;
    FeatureTypeFactory(FeatureTypeFactory const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FeatureTypeFactory\@\@QEAA\@XZ
     */
    MCAPI FeatureTypeFactory();
    /**
     * @symbol
     * ?processFeature\@FeatureTypeFactory\@\@QEBAXAEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    processFeature(class IWorldRegistriesProvider&, class ResourcePackManager const&, std::string const&, class Json::Value&, class SemVersion const&)
        const;
};
