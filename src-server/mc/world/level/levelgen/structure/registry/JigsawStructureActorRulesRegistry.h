#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolActorRule;
// clang-format on

class JigsawStructureActorRulesRegistry {
public:
    // JigsawStructureActorRulesRegistry inner types define
    using ActorRulesRegistryMap = ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolActorRule>>>>;
    
    using ActorRulesLookupMap = ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolActorRule>>>>> mActorRulesRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*>> mActorRuleLookupMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const* lookupByName(::std::string name) const;

    MCAPI void registerActorRules(::std::string name, ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolActorRule>>>&& ruleList);

    MCAPI ~JigsawStructureActorRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
