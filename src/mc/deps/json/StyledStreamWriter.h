#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledStreamWriter {
public:
    // prevent constructor by default
    StyledStreamWriter& operator=(StyledStreamWriter const&);
    StyledStreamWriter(StyledStreamWriter const&);
    StyledStreamWriter();

public:
    // NOLINTBEGIN
    // symbol: ??0StyledStreamWriter@Json@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit StyledStreamWriter(std::string indentation);

    // symbol: ?write@StyledStreamWriter@Json@@QEAAXAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVValue@2@@Z
    MCAPI void write(std::ostream&, class Json::Value const&);

    // symbol: ??1StyledStreamWriter@Json@@QEAA@XZ
    MCAPI ~StyledStreamWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?pushValue@StyledStreamWriter@Json@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void pushValue(std::string const& value);

    // symbol: ?unindent@StyledStreamWriter@Json@@AEAAXXZ
    MCAPI void unindent();

    // symbol: ?writeArrayValue@StyledStreamWriter@Json@@AEAAXAEBVValue@2@@Z
    MCAPI void writeArrayValue(class Json::Value const& value);

    // symbol: ?writeValue@StyledStreamWriter@Json@@AEAAXAEBVValue@2@@Z
    MCAPI void writeValue(class Json::Value const& value);

    // NOLINTEND
};

}; // namespace Json
