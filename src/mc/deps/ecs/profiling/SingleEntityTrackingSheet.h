#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/profiling/IEntityTrackingSheet.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class EntityId;
struct TickingSystemId;
// clang-format on

namespace ECS::Profiling {

class SingleEntityTrackingSheet : public ::ECS::Profiling::IEntityTrackingSheet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnke7dde0;
    ::ll::UntypedStorage<8, 3216> mUnk3c16cc;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleEntityTrackingSheet& operator=(SingleEntityTrackingSheet const&);
    SingleEntityTrackingSheet(SingleEntityTrackingSheet const&);
    SingleEntityTrackingSheet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clearAllEntities() /*override*/;

    virtual void zeroAllTimes() /*override*/;

    virtual void reserveEntity(::EntityId entity) /*override*/;

    virtual void reserveSystems(uint64 numSystems) /*override*/;

    virtual void addTime(
        ::EntityId                                                           entity,
        ::TickingSystemId                                                    system,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    ) /*override*/;

    virtual void addNonSystemTime(
        ::EntityId                                                           entity,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    ) /*override*/;

    virtual ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    exportData() const /*override*/;

    virtual ~SingleEntityTrackingSheet() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $clearAllEntities();

    MCNAPI void $zeroAllTimes();

    MCNAPI void $reserveEntity(::EntityId entity);

    MCNAPI void $reserveSystems(uint64 numSystems);

    MCNAPI void $addTime(
        ::EntityId                                                           entity,
        ::TickingSystemId                                                    system,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur
    );

    MCNAPI void
    $addNonSystemTime(::EntityId entity, ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> dur);

    MCNAPI ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    $exportData() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ECS::Profiling
