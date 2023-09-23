#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AutomaticFeatureRules {
public:
    // AutomaticFeatureRules inner types declare
    // clang-format off
    struct AutomaticFeatureRule;
    // clang-format on

    // AutomaticFeatureRules inner types define
    struct AutomaticFeatureRule {
    public:
        // prevent constructor by default
        AutomaticFeatureRule& operator=(AutomaticFeatureRule const&);
        AutomaticFeatureRule(AutomaticFeatureRule const&);
        AutomaticFeatureRule();

    public:
        // NOLINTBEGIN
        // symbol: ??1AutomaticFeatureRule@AutomaticFeatureRules@@QEAA@XZ
        MCAPI ~AutomaticFeatureRule();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AutomaticFeatureRules& operator=(AutomaticFeatureRules const&);
    AutomaticFeatureRules(AutomaticFeatureRules const&);
    AutomaticFeatureRules();

public:
    // NOLINTBEGIN
    // symbol:
    // ?attachAutomaticFeatures@AutomaticFeatureRules@@QEBAXAEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
    MCAPI void attachAutomaticFeatures(class ResourcePackManager&, class IWorldRegistriesProvider&) const;

    // symbol:
    // ?parseAutomaticFeatures@AutomaticFeatureRules@@QEBA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unordered_map@VHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@@std@@@5@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unordered_map@VHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@@std@@@5@@2@@std@@@2@@std@@AEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
    MCAPI std::unordered_map<
        std::string,
        std::unordered_map<class HashedString, struct AutomaticFeatureRules::AutomaticFeatureRule>>
    parseAutomaticFeatures(class ResourcePackManager&, class IWorldRegistriesProvider&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_parseAndInsertUnsorted@AutomaticFeatureRules@@AEBAXAEBV?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@V?$tuple@V?$reference_wrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$reference_wrapper@UAutomaticFeatureRule@AutomaticFeatureRules@@@2@V?$reference_wrapper@VIWorldRegistriesProvider@@@2@@std@@@JsonUtil@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEBVSemVersion@@AEAVIWorldRegistriesProvider@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unordered_map@VHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@@std@@@5@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unordered_map@VHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UAutomaticFeatureRule@AutomaticFeatureRules@@@std@@@5@@2@@std@@@2@@5@_N@Z
    MCAPI void _parseAndInsertUnsorted(
        class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::EmptyClass,
            std::tuple<
                std::reference_wrapper<std::string>,
                std::reference_wrapper<struct AutomaticFeatureRules::AutomaticFeatureRule>,
                std::reference_wrapper<class IWorldRegistriesProvider>>> const&,
        std::string const&,
        std::string const&,
        class SemVersion const&,
        class IWorldRegistriesProvider&,
        std::unordered_map<
            std::string,
            std::unordered_map<class HashedString, struct AutomaticFeatureRules::AutomaticFeatureRule>>&,
        bool
    ) const;

    // NOLINTEND
};
