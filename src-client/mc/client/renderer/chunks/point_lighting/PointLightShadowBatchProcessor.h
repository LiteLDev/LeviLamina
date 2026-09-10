#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { class PointLightShadowProbe; }
namespace PointLighting { struct ProbeBatchEntry; }
// clang-format on

namespace PointLighting {

class PointLightShadowBatchProcessor {
public:
    // PointLightShadowBatchProcessor inner types define
    using ProbeMap = ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe>;

    using IsRenderedPredicate = ::std::function<bool(::PointLighting::PointLightShadowProbe const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>        mPendingProbes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mPendingSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::PointLighting::ProbeBatchEntry> selectBatch(
        ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe> const& activeProbes,
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::BlockPos const, ::PointLighting::PointLightShadowProbe>>>>&
                                                                             nextToQueue,
        uint64                                                               budget,
        ::glm::vec3 const&                                                   worldOrigin,
        ::std::function<bool(::PointLighting::PointLightShadowProbe const&)> isRendered
    );
    // NOLINTEND
};

} // namespace PointLighting
