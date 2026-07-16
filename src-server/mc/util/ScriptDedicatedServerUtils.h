#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IScriptDedicatedServerUtils.h"

// auto generated forward declare list
// clang-format off
struct SnapshotFilenameAndLength;
// clang-format on

class ScriptDedicatedServerUtils : public ::IScriptDedicatedServerUtils {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk597c28;
    ::ll::UntypedStorage<8, 8> mUnk9a2d8c;
    ::ll::UntypedStorage<8, 8> mUnkc8884b;
    ::ll::UntypedStorage<8, 8> mUnkb63ce9;
    ::ll::UntypedStorage<8, 8> mUnk4217a0;
    ::ll::UntypedStorage<8, 8> mUnk9e3b85;
    ::ll::UntypedStorage<8, 8> mUnkd75f95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDedicatedServerUtils& operator=(ScriptDedicatedServerUtils const&);
    ScriptDedicatedServerUtils(ScriptDedicatedServerUtils const&);
    ScriptDedicatedServerUtils();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDedicatedServerUtils() /*override*/ = default;

    virtual void stopServer() /*override*/;

    virtual bool saveHold() /*override*/;

    virtual bool saveResume() /*override*/;

    virtual ::std::optional<::std::vector<::SnapshotFilenameAndLength>> saveQuery() /*override*/;

    virtual bool addNameToAllowList(::std::string const&) /*override*/;

    virtual bool removeNameFromAllowList(::std::string const&) /*override*/;

    virtual bool allowListContains(::std::string const&) /*override*/;

    virtual bool reloadAllowListFile() /*override*/;

    virtual void setAllowListEnabled(bool) /*override*/;

    virtual bool getAllowListEnabled() const /*override*/;

    virtual bool reloadPermissionsFile() /*override*/;

    virtual bool reloadScriptConfig() /*override*/;

    virtual bool reloadCDNConfig() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
