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
    MCAPI void attachAutomaticFeatures(class ResourcePackManager&, class IWorldRegistriesProvider&) const;

    MCAPI std::unordered_map<
        std::string,
        std::unordered_map<class HashedString, struct AutomaticFeatureRules::AutomaticFeatureRule>>
    parseAutomaticFeatures(class ResourcePackManager&, class IWorldRegistriesProvider&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
