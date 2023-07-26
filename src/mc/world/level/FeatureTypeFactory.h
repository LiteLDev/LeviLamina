#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FeatureTypeFactory {

public:
    // prevent constructor by default
    FeatureTypeFactory& operator=(FeatureTypeFactory const&) = delete;
    FeatureTypeFactory(FeatureTypeFactory const&)            = delete;

public:
    /**
     * @symbol ??0FeatureTypeFactory\@\@QEAA\@XZ
     */
    MCAPI FeatureTypeFactory(); // NOLINT
    /**
     * @symbol
     * ?processFeature\@FeatureTypeFactory\@\@QEBAXAEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    processFeature(class IWorldRegistriesProvider&, class ResourcePackManager const&, std::string const&, class Json::Value&, class SemVersion const&)
        const; // NOLINT
};
