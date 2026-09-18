#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DebuggerDiagnostics;
class DebuggerDiagnosticsView;
class DebuggerStat;
// clang-format on

class DebuggerStatCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka73b82;
    ::ll::UntypedStorage<8, 8>  mUnke089fd;
    ::ll::UntypedStorage<8, 8>  mUnkdbe4a8;
    ::ll::UntypedStorage<8, 8>  mUnka015d8;
    ::ll::UntypedStorage<8, 64> mUnkb1a7bd;
    ::ll::UntypedStorage<8, 64> mUnkee0dcd;
    ::ll::UntypedStorage<8, 64> mUnkd8a266;
    ::ll::UntypedStorage<8, 64> mUnk828e21;
    ::ll::UntypedStorage<8, 16> mUnka5ed36;
    ::ll::UntypedStorage<8, 16> mUnk66e847;
    ::ll::UntypedStorage<8, 16> mUnkecefdb;
    ::ll::UntypedStorage<8, 16> mUnk2be880;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerStatCollector& operator=(DebuggerStatCollector const&);
    DebuggerStatCollector(DebuggerStatCollector const&);
    DebuggerStatCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerStatCollector(
        uint64                                                                   updateFrequency,
        ::std::function<::std::optional<::DebuggerStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                  enableFn,
        ::std::function<void()>                                                  disableFn,
        ::std::function<void(bool)>                                              reloadFn
    );

    MCNAPI DebuggerStatCollector(
        ::Bedrock::NonOwnerPointer<::DebuggerDiagnostics>                        diagnostics,
        uint64                                                                   updateFrequency,
        ::std::function<::std::optional<::DebuggerStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                  enableFn,
        ::std::function<void()>                                                  disableFn,
        ::std::function<void(bool)>                                              reloadFn
    );

    MCNAPI ::DebuggerStatCollector& addView(::DebuggerDiagnosticsView descriptor);

    MCNAPI void tick(uint64 currentTick, ::std::vector<::DebuggerStat>& statsOut);

    MCNAPI ~DebuggerStatCollector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint64                                                                   updateFrequency,
        ::std::function<::std::optional<::DebuggerStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                  enableFn,
        ::std::function<void()>                                                  disableFn,
        ::std::function<void(bool)>                                              reloadFn
    );

    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::DebuggerDiagnostics>                        diagnostics,
        uint64                                                                   updateFrequency,
        ::std::function<::std::optional<::DebuggerStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                  enableFn,
        ::std::function<void()>                                                  disableFn,
        ::std::function<void(bool)>                                              reloadFn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
