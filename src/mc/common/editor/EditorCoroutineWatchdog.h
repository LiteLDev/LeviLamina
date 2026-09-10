#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace brstd { struct source_location; }
// clang-format on

namespace Editor::Services {

class EditorCoroutineWatchdog {
public:
    // EditorCoroutineWatchdog inner types declare
    // clang-format off
    struct OverrunReport;
    struct TaskDebugInfo;
    // clang-format on

    // EditorCoroutineWatchdog inner types define
    struct OverrunReport {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk586287;
        ::ll::UntypedStorage<8, 32> mUnkced5f4;
        ::ll::UntypedStorage<8, 8>  mUnk8648a9;
        ::ll::UntypedStorage<8, 8>  mUnk67915b;
        ::ll::UntypedStorage<4, 4>  mUnk74814d;
        ::ll::UntypedStorage<8, 8>  mUnk4b2914;
        ::ll::UntypedStorage<8, 8>  mUnk94382a;
        // NOLINTEND

    public:
        // prevent constructor by default
        OverrunReport& operator=(OverrunReport const&);
        OverrunReport(OverrunReport const&);
        OverrunReport();
    };

    struct TaskDebugInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke1b567;
        ::ll::UntypedStorage<8, 8>  mUnkf635ae;
        ::ll::UntypedStorage<8, 8>  mUnk528b1b;
        ::ll::UntypedStorage<4, 4>  mUnke15ad7;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskDebugInfo& operator=(TaskDebugInfo const&);
        TaskDebugInfo(TaskDebugInfo const&);
        TaskDebugInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8099aa;
    ::ll::UntypedStorage<8, 8>  mUnk6487ca;
    ::ll::UntypedStorage<8, 64> mUnk94175c;
    ::ll::UntypedStorage<1, 1>  mUnk4e1882;
    ::ll::UntypedStorage<8, 8>  mUnk21e9e2;
    ::ll::UntypedStorage<8, 8>  mUnk2d5d57;
    ::ll::UntypedStorage<8, 8>  mUnk7fe2cd;
    ::ll::UntypedStorage<8, 8>  mUnk27f3ba;
    ::ll::UntypedStorage<8, 80> mUnk6f57a7;
    ::ll::UntypedStorage<8, 64> mUnk26e416;
    ::ll::UntypedStorage<8, 80> mUnkcafcf2;
    ::ll::UntypedStorage<8, 24> mUnke10a81;
    ::ll::UntypedStorage<8, 8>  mUnkf5c83b;
    ::ll::UntypedStorage<1, 1>  mUnkbdae8c;
    ::ll::UntypedStorage<8, 8>  mUnke7376d;
    ::ll::UntypedStorage<8, 16> mUnk176c22;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorCoroutineWatchdog& operator=(EditorCoroutineWatchdog const&);
    EditorCoroutineWatchdog(EditorCoroutineWatchdog const&);
    EditorCoroutineWatchdog();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerTask(uint64 id, ::std::string const& name, ::brstd::source_location const& location);
    // NOLINTEND
};

} // namespace Editor::Services
