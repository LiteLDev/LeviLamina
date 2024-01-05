#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry : public ::IJsonSerializable {
public:
    std::string mName;               // 8
    mce::UUID   mUuid;               // 40
    std::string mXuid;               // 56
    bool        mIgnoresPlayerLimit; // 88

    AllowListEntry(
        std::string name,
        std::string xuid,
        mce::UUID   uuid               = mce::UUID::EMPTY,
        bool        ignoresPlayerLimit = false
    )
    : mName(std::move(name)),
      mUuid(uuid),
      mXuid(std::move(xuid)),
      mIgnoresPlayerLimit(ignoresPlayerLimit) {}

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AllowListEntry@@UEAA@XZ
    virtual ~AllowListEntry();

    // vIndex: 1, symbol: ?serialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value& root);

    // vIndex: 2, symbol: ?deserialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void deserialize(class Json::Value& root);

    // symbol: ??0AllowListEntry@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit AllowListEntry(std::string name);

    // NOLINTEND
};
