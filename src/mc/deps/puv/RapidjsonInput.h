#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {

class RapidjsonInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk4c4027;
    // NOLINTEND

public:
    // prevent constructor by default
    RapidjsonInput& operator=(RapidjsonInput const&);
    RapidjsonInput(RapidjsonInput const&);
    RapidjsonInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SemVersion version() const /*override*/;

    virtual ::Puv::Input::Data data() const /*override*/;

    virtual ~RapidjsonInput() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Puv
