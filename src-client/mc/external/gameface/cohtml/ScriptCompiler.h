#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class DataBuffer; }
// clang-format on

namespace cohtml {

class ScriptCompiler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cohtml::DataBuffer* Compile(::cohtml::DataBuffer*) = 0;

    virtual void Destroy() = 0;

    virtual ~ScriptCompiler() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
