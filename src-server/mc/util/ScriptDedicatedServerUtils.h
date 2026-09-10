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
    ::ll::UntypedStorage<8, 8> mUnkc73a76;
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

    virtual bool addToAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) /*override*/;

    virtual bool removeFromAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) /*override*/;

    virtual bool allowListContains(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) /*override*/;

    virtual ::std::vector<::IScriptDedicatedServerUtils::AllowListEntryInfo> getAllowListEntries() const /*override*/;

    virtual void clearAllowList() /*override*/;

    virtual bool reloadAllowListFile() /*override*/;

    virtual void setAllowListEnabled(bool enabled) /*override*/;

    virtual bool getAllowListEnabled() const /*override*/;

    virtual ::std::vector<::std::string> getOperatorXuids() const /*override*/;

    virtual bool reloadPermissionsFile() /*override*/;

    virtual bool reloadScriptConfig() /*override*/;

    virtual bool reloadCDNConfig() /*override*/;

    virtual ::std::string const& getSessionID() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $stopServer();

    MCNAPI bool $saveHold();

    MCNAPI bool $saveResume();

    MCNAPI ::std::optional<::std::vector<::SnapshotFilenameAndLength>> $saveQuery();

    MCNAPI bool $addToAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCNAPI bool $removeFromAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCNAPI bool $allowListContains(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCNAPI ::std::vector<::IScriptDedicatedServerUtils::AllowListEntryInfo> $getAllowListEntries() const;

    MCNAPI void $clearAllowList();

    MCNAPI bool $reloadAllowListFile();

    MCNAPI void $setAllowListEnabled(bool enabled);

    MCNAPI bool $getAllowListEnabled() const;

    MCNAPI ::std::vector<::std::string> $getOperatorXuids() const;

    MCNAPI bool $reloadPermissionsFile();

    MCNAPI bool $reloadScriptConfig();

    MCNAPI bool $reloadCDNConfig();

    MCNAPI ::std::string const& $getSessionID() const;
    // NOLINTEND
};
