#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace ActorMigratedUtils {

class ActorPuvInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk68914d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPuvInput& operator=(ActorPuvInput const&);
    ActorPuvInput(ActorPuvInput const&);
    ActorPuvInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SemVersion version() const /*override*/;

    virtual ::Puv::Input::Data data() const /*override*/;

    virtual ~ActorPuvInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SemVersion $version() const;

    MCNAPI ::Puv::Input::Data $data() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ActorMigratedUtils
