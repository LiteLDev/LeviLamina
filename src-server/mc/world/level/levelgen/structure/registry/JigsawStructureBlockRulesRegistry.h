#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockRule;
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

class JigsawStructureBlockRulesRegistry {
public:
    // JigsawStructureBlockRulesRegistry inner types define
    using StructureProcessorPtr = ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>;
    
    using StructureProcessorList = ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;
    
    using BlockRulesRegistryMap = ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockRule>>>>;
    
    using BlockRulesLookupMap = ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockRule>>>>> mBlockRulesRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>> mBlockRuleLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::gsl::not_null<::std::shared_ptr<::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>> mProcessors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::gsl::not_null<::std::shared_ptr<::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>> get(::std::string_view key) const;

    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const* lookupByName(::std::string name) const;

    MCAPI void record(::std::string_view key, ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> processors);

    MCAPI void registerBlockRules(::std::string name, ::std::unique_ptr<::std::vector<::std::unique_ptr<::StructurePoolBlockRule>>>&& ruleList);

    MCAPI ~JigsawStructureBlockRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
