#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ServerTextSettings& operator=(ServerTextSettings const&);
    ServerTextSettings(ServerTextSettings const&);
    ServerTextSettings();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerTextSettings@@UEAA@XZ
    virtual ~ServerTextSettings() = default;

    // symbol: ??0ServerTextSettings@@QEAA@AEBV?$bitset@$02@std@@@Z
    MCAPI explicit ServerTextSettings(std::bitset<3> const&);

    // symbol: ?getEnabledServerTextEvents@ServerTextSettings@@QEBAAEBV?$bitset@$02@std@@XZ
    MCAPI std::bitset<3> const& getEnabledServerTextEvents() const;

    // NOLINTEND
};
