#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

class ProfilerUsageEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ProfilerUsageEventing inner types declare
    // clang-format off
    struct ProfilerUsage;
    // clang-format on

    // ProfilerUsageEventing inner types define
    struct ProfilerUsage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf22fc2;
        ::ll::UntypedStorage<8, 64> mUnk2ccc61;
        ::ll::UntypedStorage<1, 1>  mUnk40e98c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProfilerUsage& operator=(ProfilerUsage const&);
        ProfilerUsage(ProfilerUsage const&);
        ProfilerUsage();
    };

    using ProfilerUsageCheck = ::brstd::copyable_function<bool()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                  mEventing;
    ::ll::TypedStorage<8, 24, ::std::vector<::ProfilerUsageEventing::ProfilerUsage>> mProfilerUsageChecks;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerUsageEventing& operator=(ProfilerUsageEventing const&);
    ProfilerUsageEventing(ProfilerUsageEventing const&);
    ProfilerUsageEventing();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void addProfiler(::std::string_view profilerName, ::brstd::copyable_function<bool()> isActive);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
