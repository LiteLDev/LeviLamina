#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class StructurePoolActorRule;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
// clang-format on

struct StructurePoolElementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*> mBlockRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*> mBlockTagRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*> mActorRules;
    ::ll::TypedStorage<1, 1, ::Projection> mProjection;
    ::ll::TypedStorage<1, 1, ::PostProcessSettings> mPostProcessSettings;
    ::ll::TypedStorage<1, 1, bool> mReloadActorLootTables;
    // NOLINTEND

};
