#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Bedrock::Resources {

class MinecraftDocumentInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkbde5d3;
    ::ll::UntypedStorage<8, 112> mUnkfdcb9e;
    ::ll::UntypedStorage<8, 32>  mUnkc2b7c6;
    ::ll::UntypedStorage<8, 32>  mUnkf8cada;
    ::ll::UntypedStorage<8, 96>  mUnkdb91ac;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftDocumentInput& operator=(MinecraftDocumentInput const&);
    MinecraftDocumentInput(MinecraftDocumentInput const&);
    MinecraftDocumentInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::SemVersion version() const /*override*/;

    // vIndex: 2
    virtual ::Puv::Input::Data data() const /*override*/;

    // vIndex: 0
    virtual ~MinecraftDocumentInput() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftDocumentInput(::SemVersion const& minModernVersion, ::std::string json);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SemVersion const& minModernVersion, ::std::string json);
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

} // namespace Bedrock::Resources
