#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {

class DynamicValueInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk10c10f;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValueInput& operator=(DynamicValueInput const&);
    DynamicValueInput(DynamicValueInput const&);
    DynamicValueInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SemVersion version() const /*override*/;

    virtual ::Puv::Input::Data data() const /*override*/;

    virtual ~DynamicValueInput() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Puv
