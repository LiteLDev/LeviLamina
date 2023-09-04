#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry : public ::IJsonSerializable {
public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&) = delete;
    AllowListEntry(AllowListEntry const&)            = delete;
    AllowListEntry()                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?serialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value&);

    // vIndex: 2, symbol: ?deserialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void deserialize(class Json::Value&);

    // symbol: ??1AllowListEntry@@UEAA@XZ
    MCVAPI ~AllowListEntry();

    // symbol: ??0AllowListEntry@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI AllowListEntry(std::string);

    // NOLINTEND
};
