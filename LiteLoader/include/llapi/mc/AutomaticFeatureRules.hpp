/**
 * @file  AutomaticFeatureRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace AutomaticFeatureRules.
 *
 */
namespace AutomaticFeatureRules {

#define AFTER_EXTRA
// Add Member There
struct AutomaticFeatureRule {
    AutomaticFeatureRule() = delete;
    AutomaticFeatureRule(AutomaticFeatureRule const&) = delete;
    AutomaticFeatureRule(AutomaticFeatureRule const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol  ?attachAutomaticFeatures\@AutomaticFeatureRules\@\@YAXAEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void attachAutomaticFeatures(class ResourcePackManager &, class IWorldRegistriesProvider &, class Experiments const &);
    /**
     * @symbol  ?parseAutomaticFeatures\@AutomaticFeatureRules\@\@YAXAEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@AEBVExperiments\@\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unordered_map\@VHashedString\@\@UAutomaticFeatureRule\@AutomaticFeatureRules\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UAutomaticFeatureRule\@AutomaticFeatureRules\@\@\@std\@\@\@5\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unordered_map\@VHashedString\@\@UAutomaticFeatureRule\@AutomaticFeatureRules\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UAutomaticFeatureRule\@AutomaticFeatureRules\@\@\@std\@\@\@5\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void parseAutomaticFeatures(class ResourcePackManager &, class IWorldRegistriesProvider &, class Experiments const &, class std::unordered_map<std::string, class std::unordered_map<class HashedString, struct AutomaticFeatureRules::AutomaticFeatureRule, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct AutomaticFeatureRules::AutomaticFeatureRule>>>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::unordered_map<class HashedString, struct AutomaticFeatureRules::AutomaticFeatureRule, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct AutomaticFeatureRules::AutomaticFeatureRule>>>>>> &);

};