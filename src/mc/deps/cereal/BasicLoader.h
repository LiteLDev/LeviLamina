#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

namespace cereal {

class BasicLoader {
public:
    // prevent constructor by default
    BasicLoader& operator=(BasicLoader const&);
    BasicLoader(BasicLoader const&);
    BasicLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicLoader@cereal@@UEAA@XZ
    virtual ~BasicLoader();

    // symbol:
    // ?getErrors@BasicLoader@cereal@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // symbol:
    // ?getLog@BasicLoader@cereal@@QEBAAEBV?$vector@ULogEntry@SerializerContext@cereal@@V?$allocator@ULogEntry@SerializerContext@cereal@@@std@@@std@@XZ
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    // NOLINTEND
};

}; // namespace cereal
