#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {

class BinaryInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkada739;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryInput& operator=(BinaryInput const&);
    BinaryInput(BinaryInput const&);
    BinaryInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::SemVersion version() const /*override*/;

    // vIndex: 2
    virtual ::Puv::Input::Data data() const /*override*/;

    // vIndex: 0
    virtual ~BinaryInput() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BinaryInput(::std::string data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::SemVersion $version() const;

    MCAPI ::Puv::Input::Data $data() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
