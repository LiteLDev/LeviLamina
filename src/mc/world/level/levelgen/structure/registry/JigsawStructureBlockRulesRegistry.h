#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockRule;
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

class JigsawStructureBlockRulesRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk566d5a;
    ::ll::UntypedStorage<8, 64> mUnka73fcf;
    ::ll::UntypedStorage<8, 64> mUnk9fc2c0;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBlockRulesRegistry& operator=(JigsawStructureBlockRulesRegistry const&);
    JigsawStructureBlockRulesRegistry(JigsawStructureBlockRulesRegistry const&);
    JigsawStructureBlockRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::gsl::not_null<::std::shared_ptr<
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>
    get(::std::string_view key) const;

    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const* lookupByName(::std::string name) const;

    MCAPI void record(
        ::std::string_view                                                                          key,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> processors
    );

    MCAPI void registerBlockRules(
        ::std::string                                                                   name,
        ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockRule>>>&& ruleList
    );

    MCAPI ~JigsawStructureBlockRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
