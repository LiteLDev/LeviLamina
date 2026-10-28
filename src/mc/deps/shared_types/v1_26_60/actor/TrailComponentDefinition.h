#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct TrailComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>             mSpawnCondition;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlocksToReplace;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mReplacementBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                mSpawnOffset;
    ::ll::TypedStorage<4, 4, int>                                                    mRadius;
    ::ll::TypedStorage<1, 1, bool>                                                   mForceReplaceMatchedBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    TrailComponentDefinition& operator=(TrailComponentDefinition const&);
    TrailComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrailComponentDefinition(::SharedTypes::v1_26_60::TrailComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_60::TrailComponentDefinition&
    operator=(::SharedTypes::v1_26_60::TrailComponentDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::TrailComponentDefinition const&) const;

    MCAPI ~TrailComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_SPAWN_OFFSET();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_60::TrailComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
