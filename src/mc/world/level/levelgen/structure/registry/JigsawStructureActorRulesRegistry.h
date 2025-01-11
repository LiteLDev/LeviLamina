#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolActorRule;
// clang-format on

class JigsawStructureActorRulesRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfcfca1;
    ::ll::UntypedStorage<8, 64> mUnk478b5e;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureActorRulesRegistry& operator=(JigsawStructureActorRulesRegistry const&);
    JigsawStructureActorRulesRegistry(JigsawStructureActorRulesRegistry const&);
    JigsawStructureActorRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const* lookupByName(::std::string name) const;

    MCAPI void registerActorRules(
        ::std::string                                                                   name,
        ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolActorRule>>>&& ruleList
    );

    MCAPI ~JigsawStructureActorRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
