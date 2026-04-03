#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

namespace PointLighting {

struct ICandidacyHeuristic {
public:
    // ICandidacyHeuristic inner types define
    enum class Statefulness : int {
        Stateful   = 0,
        Persistent = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PointLighting::ICandidacyHeuristic::Statefulness> mStatefulness;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICandidacyHeuristic() = default;

    virtual bool reject(::SubChunkPos const&) const;

    virtual float computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PointLighting
