#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Bedrock::Resources { struct BinaryHeader; }
// clang-format on

namespace Bedrock::Resources {

class MinecraftDocumentInput : public ::Puv::Input {
public:
    // MinecraftDocumentInput inner types declare
    // clang-format off
    struct Binary;
    // clang-format on

    // MinecraftDocumentInput inner types define
    struct Binary {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk236c17;
        ::ll::UntypedStorage<8, 16> mUnk863df5;
        // NOLINTEND

    public:
        // prevent constructor by default
        Binary& operator=(Binary const&);
        Binary(Binary const&);
        Binary();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbde5d3;
    ::ll::UntypedStorage<8, 24>  mUnkfdcb9e;
    ::ll::UntypedStorage<8, 32>  mUnkf8cada;
    ::ll::UntypedStorage<8, 104> mUnkb30b31;
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
    MCNAPI MinecraftDocumentInput(::SemVersion const& minModernVersion, ::std::string data);

    MCNAPI void initAsBinary(::std::string data, ::Bedrock::Resources::BinaryHeader const& header);

    MCNAPI void initAsJson(::std::string data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion const& minModernVersion, ::std::string data);
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

} // namespace Bedrock::Resources
