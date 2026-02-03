#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"

namespace ScriptModuleMinecraft {

struct SupportedScriptComponentFactoriesEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                        mMinVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::BaseGameVersion>>       mMaxVersionExclusive;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPrerelease;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string_view>> mSupportedComponentTypeNames;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedScriptComponentFactoriesEntry& operator=(SupportedScriptComponentFactoriesEntry const&);
    SupportedScriptComponentFactoriesEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SupportedScriptComponentFactoriesEntry(::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry const&);

    MCAPI SupportedScriptComponentFactoriesEntry(
        ::BaseGameVersion                        minVersion,
        ::std::unordered_set<::std::string_view> supportedComponentTypeNames,
        ::std::string                            prerelease,
        ::std::optional<::BaseGameVersion>       maxVersionExclusive
    );

    MCAPI ~SupportedScriptComponentFactoriesEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry const&);

    MCAPI void* $ctor(
        ::BaseGameVersion                        minVersion,
        ::std::unordered_set<::std::string_view> supportedComponentTypeNames,
        ::std::string                            prerelease,
        ::std::optional<::BaseGameVersion>       maxVersionExclusive
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
