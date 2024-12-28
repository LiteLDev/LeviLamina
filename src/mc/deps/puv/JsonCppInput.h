#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
// clang-format on

namespace Puv {

class JsonCppInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkec571a;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonCppInput& operator=(JsonCppInput const&);
    JsonCppInput(JsonCppInput const&);
    JsonCppInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::SemVersion version() const /*override*/;

    // vIndex: 2
    virtual ::Puv::Input::Data data() const /*override*/;

    // vIndex: 0
    virtual ~JsonCppInput() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JsonCppInput(::Json::Value json);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
