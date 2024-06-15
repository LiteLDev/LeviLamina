#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class StringNode {
public:
    // prevent constructor by default
    StringNode& operator=(StringNode const&);
    StringNode(StringNode const&);
    StringNode();

public:
    // NOLINTBEGIN
    // symbol: ?getCString@StringNode@JSONObject@Bedrock@@QEBAPEBDPEA_K@Z
    MCAPI char const* getCString(uint64* outputLength) const;

    // symbol: ?set@StringNode@JSONObject@Bedrock@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI bool set(std::string_view str, bool copy);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0StringNode@JSONObject@Bedrock@@AEAA@PEAVMemoryPage@12@@Z
    MCAPI explicit StringNode(class Bedrock::JSONObject::MemoryPage*);

    // symbol: ?_isConst@StringNode@JSONObject@Bedrock@@AEBA_NXZ
    MCAPI bool _isConst() const;

    // symbol: ?_isSSO@StringNode@JSONObject@Bedrock@@AEBA_NXZ
    MCAPI bool _isSSO() const;

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
