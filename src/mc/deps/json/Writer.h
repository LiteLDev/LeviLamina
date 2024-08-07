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
    // vIndex: 0
    virtual ~Writer();

    // vIndex: 1
    virtual std::string write(class Json::Value const&) = 0;

    // NOLINTEND
};

}; // namespace Json
