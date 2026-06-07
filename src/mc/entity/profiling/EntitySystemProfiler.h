#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class EntityRegistry;
class EntitySystems;
// clang-format on

namespace ECS::Profiling {

class EntitySystemProfiler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>      mUnkeaafc6;
    ::ll::UntypedStorage<8, 8>      mUnk206cab;
    ::ll::UntypedStorage<8, 16>     mUnk65eb32;
    ::ll::UntypedStorage<8, 64>     mUnka1e533;
    ::ll::UntypedStorage<8, 3256>   mUnka6ff4b;
    ::ll::UntypedStorage<8, 732856> mUnk150727;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemProfiler& operator=(EntitySystemProfiler const&);
    EntitySystemProfiler(EntitySystemProfiler const&);
    EntitySystemProfiler();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EntitySystemProfiler(::EntityRegistry& entityRegistry, ::EntitySystems& entitySystems);

    MCNAPI ::brstd::flat_map<
        ::EntityId,
        ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>,
        ::std::less<::EntityId>,
        ::std::vector<::EntityId>,
        ::std::vector<
            ::Bedrock::small_vector<::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>, 400>>>
    ExportData() const;

    MCNAPI void UninstallHooks();

    MCNAPI ~EntitySystemProfiler();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::EntityRegistry& entityRegistry, ::EntitySystems& entitySystems);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ECS::Profiling
