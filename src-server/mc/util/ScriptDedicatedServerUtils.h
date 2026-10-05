#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/IScriptDedicatedServerUtils.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class CDNConfig;
class DedicatedServer;
class Level;
class MinecraftCommands;
class PermissionsFile;
struct ScriptSettings;
struct SnapshotFilenameAndLength;
// clang-format on

class ScriptDedicatedServerUtils : public ::IScriptDedicatedServerUtils {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::DedicatedServer&>   mServer;
    ::ll::TypedStorage<8, 8, ::AllowListFile&>     mAllowListFile;
    ::ll::TypedStorage<8, 8, ::PermissionsFile&>   mPermissionsFile;
    ::ll::TypedStorage<8, 8, ::CDNConfig&>         mCDNConfig;
    ::ll::TypedStorage<8, 8, ::Level*>             mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptSettings*>    mScriptSettings;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands*> mCommands;
    ::ll::TypedStorage<8, 8, ::std::string const&> mSessionID;
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

    virtual bool reloadPermissionsFile() /*override*/;

    virtual ::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& getPermissions() const /*override*/;

    virtual bool
    setPermissions(::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& permissionData) /*override*/;

    virtual bool setPlayerPermission(::std::string const& xuid, ::PlayerPermissionLevel permission) /*override*/;

    virtual bool reloadScriptConfig() /*override*/;

    virtual bool reloadCDNConfig() /*override*/;

    virtual ::std::string const& getSessionID() const /*override*/;

    virtual void stopServer() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $saveHold();

    MCAPI bool $saveResume();

    MCAPI ::std::optional<::std::vector<::SnapshotFilenameAndLength>> $saveQuery();

    MCAPI bool $addToAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCAPI bool $removeFromAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCAPI bool $allowListContains(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity);

    MCAPI ::std::vector<::IScriptDedicatedServerUtils::AllowListEntryInfo> $getAllowListEntries() const;

    MCAPI void $clearAllowList();

    MCAPI bool $reloadAllowListFile();

    MCAPI void $setAllowListEnabled(bool enabled);

    MCAPI bool $getAllowListEnabled() const;

    MCAPI bool $reloadPermissionsFile();

    MCAPI ::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& $getPermissions() const;

    MCAPI bool $setPermissions(::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& permissionData);

    MCAPI bool $setPlayerPermission(::std::string const& xuid, ::PlayerPermissionLevel permission);

    MCAPI bool $reloadScriptConfig();

    MCAPI bool $reloadCDNConfig();

    MCAPI ::std::string const& $getSessionID() const;

    MCAPI void $stopServer();
    // NOLINTEND
};
