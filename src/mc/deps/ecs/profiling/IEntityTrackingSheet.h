#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class EntityId;
struct TickingSystemId;
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace ECS::Profiling {

class IEntityTrackingSheet {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntityTrackingSheet() = default;

    virtual void clearAllEntities() = 0;

    virtual void zeroAllTimes() = 0;

    virtual void reserveEntity(::EntityId) = 0;

    virtual void reserveSystems(uint64) = 0;

    virtual void addTime(
        ::EntityId,
        ::TickingSystemId,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>
    ) = 0;

    virtual void addNonSystemTime(::EntityId, ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>) = 0;

    virtual ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    exportData() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ECS::Profiling
