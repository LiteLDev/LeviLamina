#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class IOwnedConstBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IOwnedConstBlockSource() = default;

    // vIndex: 1
    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace VanillaSystems
