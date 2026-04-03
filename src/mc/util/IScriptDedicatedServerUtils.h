#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SnapshotFilenameAndLength;
// clang-format on

class IScriptDedicatedServerUtils {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDedicatedServerUtils() = default;

    virtual void stopServer() = 0;

    virtual bool saveHold() = 0;

    virtual bool saveResume() = 0;

    virtual ::std::optional<::std::vector<::SnapshotFilenameAndLength>> saveQuery() = 0;

    virtual bool addNameToAllowList(::std::string const&) = 0;

    virtual bool removeNameFromAllowList(::std::string const&) = 0;

    virtual bool allowListContains(::std::string const&) = 0;

    virtual bool reloadAllowListFile() = 0;

    virtual void setAllowListEnabled(bool) = 0;

    virtual bool getAllowListEnabled() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
