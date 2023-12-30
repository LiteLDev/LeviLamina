#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class Writer {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Writer@Json@@UEAA@XZ
    virtual ~Writer();

    // vIndex: 1, symbol:
    // ?write@FastWriter@Json@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@2@@Z
    virtual std::string write(class Json::Value const&) = 0;

    // NOLINTEND
};

}; // namespace Json
