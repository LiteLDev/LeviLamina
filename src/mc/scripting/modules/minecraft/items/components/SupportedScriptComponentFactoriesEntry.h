#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

namespace ScriptModuleMinecraft {

struct SupportedScriptComponentFactoriesEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk73b536;
    ::ll::UntypedStorage<8, 40> mUnk1a3f89;
    ::ll::UntypedStorage<8, 32> mUnkcacf96;
    ::ll::UntypedStorage<8, 64> mUnk7a6a40;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedScriptComponentFactoriesEntry& operator=(SupportedScriptComponentFactoriesEntry const&);
    SupportedScriptComponentFactoriesEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SupportedScriptComponentFactoriesEntry(::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry const&);

    MCNAPI SupportedScriptComponentFactoriesEntry(
        ::BaseGameVersion                   minVersion,
        ::std::unordered_set<::std::string> supportedComponentTypeNames,
        ::std::string                       prerelease,
        ::std::optional<::BaseGameVersion>  maxVersionExclusive
    );

    MCNAPI ~SupportedScriptComponentFactoriesEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry const&);

    MCNAPI void* $ctor(
        ::BaseGameVersion                   minVersion,
        ::std::unordered_set<::std::string> supportedComponentTypeNames,
        ::std::string                       prerelease,
        ::std::optional<::BaseGameVersion>  maxVersionExclusive
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
