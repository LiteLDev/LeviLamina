#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct SettingsScreenCapabilities {
public:
    // prevent constructor by default
    SettingsScreenCapabilities& operator=(SettingsScreenCapabilities const&);
    SettingsScreenCapabilities(SettingsScreenCapabilities const&);
    SettingsScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SettingsScreenCapabilities@@UEAA@XZ
    virtual ~SettingsScreenCapabilities();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@USettingsScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
