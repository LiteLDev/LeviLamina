#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockTagRule;
// clang-format on

class JigsawStructureBlockTagRulesRegistry {
public:
    // JigsawStructureBlockTagRulesRegistry inner types define
    using BlockTagRulesLookupMap =
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>;

    using BlockTagRulesRegistryMap =
        ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>>>
        mBlockTagRulesRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>>
        mBlockTagRuleLookupMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* lookupByName(::std::string name) const;

    MCNAPI void registerBlockTagRules(
        ::std::string                                                                      name,
        ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>&& ruleList
    );

    MCNAPI ~JigsawStructureBlockTagRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
