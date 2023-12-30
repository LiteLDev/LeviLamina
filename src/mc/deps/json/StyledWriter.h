#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class Writer; }
// clang-format on

namespace Json {

class StyledWriter : public ::Json::Writer {
public:
    using ChildValues = std::vector<std::string>;

    ChildValues childValues_;
    std::string document_;
    std::string indentString_;
    uint        rightMargin_;
    uint        indentSize_;
    bool        addChildValues_;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StyledWriter@Json@@UEAA@XZ
    virtual ~StyledWriter();

    // vIndex: 1, symbol:
    // ?write@StyledWriter@Json@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@2@@Z
    virtual std::string write(class Json::Value const&);

    // symbol: ??0StyledWriter@Json@@QEAA@XZ
    MCAPI StyledWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?indent@StyledWriter@Json@@AEAAXXZ
    MCAPI void indent();

    // symbol: ?pushValue@StyledWriter@Json@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void pushValue(std::string const& value);

    // symbol: ?unindent@StyledWriter@Json@@AEAAXXZ
    MCAPI void unindent();

    // symbol: ?writeArrayValue@StyledWriter@Json@@AEAAXAEBVValue@2@@Z
    MCAPI void writeArrayValue(class Json::Value const& value);

    // symbol: ?writeValue@StyledWriter@Json@@AEAAXAEBVValue@2@@Z
    MCAPI void writeValue(class Json::Value const& value);

    // symbol:
    // ?writeWithIndent@StyledWriter@Json@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void writeWithIndent(std::string const& value);

    // NOLINTEND
};

}; // namespace Json
