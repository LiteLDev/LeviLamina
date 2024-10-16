#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class Writer {
public:
    // prevent constructor by default
    Writer& operator=(Writer const&);
    Writer(Writer const&);
    Writer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Writer();

    // vIndex: 1
    virtual std::string write(class Json::Value const& root) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Json
