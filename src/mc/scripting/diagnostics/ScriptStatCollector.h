#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptDiagnostics;
class ScriptStat;
// clang-format on

class ScriptStatCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk99677c;
    ::ll::UntypedStorage<8, 8>  mUnke812e0;
    ::ll::UntypedStorage<8, 8>  mUnke27a33;
    ::ll::UntypedStorage<8, 8>  mUnk30d495;
    ::ll::UntypedStorage<8, 64> mUnk2f346c;
    ::ll::UntypedStorage<8, 64> mUnk23db68;
    ::ll::UntypedStorage<8, 64> mUnke7e3d4;
    ::ll::UntypedStorage<8, 64> mUnkb42239;
    ::ll::UntypedStorage<8, 16> mUnkf0531e;
    ::ll::UntypedStorage<8, 16> mUnk575a09;
    ::ll::UntypedStorage<8, 16> mUnka75258;
    ::ll::UntypedStorage<8, 16> mUnk28fba0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStatCollector& operator=(ScriptStatCollector const&);
    ScriptStatCollector(ScriptStatCollector const&);
    ScriptStatCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStatCollector(
        uint64                                                                 updateFrequency,
        ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                enableFn,
        ::std::function<void()>                                                disableFn,
        ::std::function<void(bool)>                                            reloadFn
    );

    MCNAPI ScriptStatCollector(
        ::Bedrock::NonOwnerPointer<::ScriptDiagnostics>                        diagnostics,
        uint64                                                                 updateFrequency,
        ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                enableFn,
        ::std::function<void()>                                                disableFn,
        ::std::function<void(bool)>                                            reloadFn
    );

    MCNAPI void tick(uint64 currentTick, ::std::vector<::ScriptStat>& statsOut);

    MCNAPI ~ScriptStatCollector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint64                                                                 updateFrequency,
        ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                enableFn,
        ::std::function<void()>                                                disableFn,
        ::std::function<void(bool)>                                            reloadFn
    );

    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::ScriptDiagnostics>                        diagnostics,
        uint64                                                                 updateFrequency,
        ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectFn,
        ::std::function<void()>                                                enableFn,
        ::std::function<void()>                                                disableFn,
        ::std::function<void(bool)>                                            reloadFn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
