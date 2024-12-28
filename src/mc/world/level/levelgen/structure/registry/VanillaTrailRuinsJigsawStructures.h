#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
struct StructureTemplateRegistrationContext;
// clang-format on

class VanillaTrailRuinsJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructures& operator=(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initialize(::StructureTemplateRegistrationContext& context, ::JigsawStructureRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& START();
    // NOLINTEND
};
