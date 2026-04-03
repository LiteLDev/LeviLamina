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
    ::ll::UntypedStorage<8, 8> mUnk4217a0;
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

    virtual bool addNameToAllowList(::std::string const& name) /*override*/;

    virtual bool removeNameFromAllowList(::std::string const& name) /*override*/;

    virtual bool allowListContains(::std::string const& name) /*override*/;

    virtual bool reloadAllowListFile() /*override*/;

    virtual void setAllowListEnabled(bool enabled) /*override*/;

    virtual bool getAllowListEnabled() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $stopServer();

    MCNAPI bool $saveHold();

    MCNAPI bool $saveResume();

    MCNAPI ::std::optional<::std::vector<::SnapshotFilenameAndLength>> $saveQuery();

    MCNAPI bool $addNameToAllowList(::std::string const& name);

    MCNAPI bool $removeNameFromAllowList(::std::string const& name);

    MCNAPI bool $allowListContains(::std::string const& name);

    MCNAPI bool $reloadAllowListFile();

    MCNAPI void $setAllowListEnabled(bool enabled);

    MCNAPI bool $getAllowListEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
