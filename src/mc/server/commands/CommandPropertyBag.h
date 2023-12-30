#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommandPropertyBag {
public:
    Json::Value mJsonValue;
    int         mChangeVersion;

    // prevent constructor by default
    CommandPropertyBag& operator=(CommandPropertyBag const&);
    CommandPropertyBag(CommandPropertyBag const&);
    CommandPropertyBag();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommandPropertyBag@@UEAA@XZ
    virtual ~CommandPropertyBag() = default;

    // symbol: ??0CommandPropertyBag@@QEAA@AEBVValue@Json@@@Z
    MCAPI explicit CommandPropertyBag(class Json::Value const& jsonValue);

    // symbol:
    // ?addToResultList@CommandPropertyBag@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void addToResultList(std::string const& key, std::string const& element);

    // symbol:
    // ?set@CommandPropertyBag@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@@Z
    MCAPI void set(std::string const& key, class BlockPos const& pos);

    // symbol:
    // ?set@CommandPropertyBag@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI void set(std::string const& key, class Json::Value const& val);

    // symbol: ?set@CommandPropertyBag@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@Z
    MCAPI void set(std::string const& key, class Vec3 size);

    // NOLINTEND
};
