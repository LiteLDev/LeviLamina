#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct SettingsScreenCapabilities {
public:
    // prevent constructor by default
    SettingsScreenCapabilities& operator=(SettingsScreenCapabilities const&);
    SettingsScreenCapabilities(SettingsScreenCapabilities const&);
    SettingsScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SettingsScreenCapabilities();

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
