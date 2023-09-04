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
    virtual ~Writer() {}
    virtual std::string write(Json::Value const& root) = 0;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?write@FastWriter@Json@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@2@@Z
    virtual std::string write(class Json::Value const&) = 0;

    // symbol: ??1Writer@Json@@UEAA@XZ
    MCVAPI ~Writer();

    // NOLINTEND
};

}; // namespace Json
