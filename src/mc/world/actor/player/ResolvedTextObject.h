#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ResolvedTextObject {
public:
    // prevent constructor by default
    ResolvedTextObject& operator=(ResolvedTextObject const&);
    ResolvedTextObject(ResolvedTextObject const&);
    ResolvedTextObject();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getAsJsonString@ResolvedTextObject@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAsJsonString() const;

    // symbol: ?getJson@ResolvedTextObject@@QEBAAEBVValue@Json@@XZ
    MCAPI class Json::Value const& getJson() const;

    // symbol: ??1ResolvedTextObject@@QEAA@XZ
    MCAPI ~ResolvedTextObject();

    // NOLINTEND
};
