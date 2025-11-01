#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockTagRule;
// clang-format on

class JigsawStructureBlockTagRulesRegistry {
public:
    // JigsawStructureBlockTagRulesRegistry inner types define
    using BlockTagRulesRegistryMap = ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>>;
    
    using BlockTagRulesLookupMap = ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>>> mBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>> mBlockTagRuleLookupMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* lookupByName(::std::string name) const;

    MCAPI void registerBlockTagRules(::std::string name, ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>&& ruleList);

    MCAPI ~JigsawStructureBlockTagRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
