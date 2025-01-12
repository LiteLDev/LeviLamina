#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockTagRule;
// clang-format on

class JigsawStructureBlockTagRulesRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc54759;
    ::ll::UntypedStorage<8, 64> mUnk1e71a5;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBlockTagRulesRegistry& operator=(JigsawStructureBlockTagRulesRegistry const&);
    JigsawStructureBlockTagRulesRegistry(JigsawStructureBlockTagRulesRegistry const&);
    JigsawStructureBlockTagRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* lookupByName(::std::string name) const;

    MCAPI void registerBlockTagRules(
        ::std::string                                                                      name,
        ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>>>&& ruleList
    );

    MCAPI ~JigsawStructureBlockTagRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
