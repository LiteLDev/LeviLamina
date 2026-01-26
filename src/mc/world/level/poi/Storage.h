#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/world/level/levelgen/v2/WorldGenContext.h"
#include "mc/world/level/poi/ChunkPosId.h"
#include "mc/world/level/poi/SectionPosId.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace Poi { struct Registry; }
namespace Poi { struct Section; }
// clang-format on

namespace Poi {

struct Storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::Poi::SectionPosId, ::std::unique_ptr<::Poi::Section>>> mSections;
    ::ll::TypedStorage < 8, 72, ::entt::dense_set<::Poi::ChunkPosId> mDirtyChunks;
    ::ll::TypedStorage<2, 6, ::br::worldgen::WorldGenContext> mWorldContext;
    ::ll::TypedStorage<8, 120, ::cereal::ReflectionCtx>       mCtx;
    ::ll::TypedStorage<8, 8, ::Dimension const*>              mDimension;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>          mRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Storage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Poi
