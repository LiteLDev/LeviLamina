#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Logger; }
// clang-format on

namespace Bedrock::Resources {

class MinecraftDocumentInput : public ::Puv::Input {
public:
    // MinecraftDocumentInput inner types declare
    // clang-format off
    struct Binary;
    struct NoPayloadCheck;
    // clang-format on

    // MinecraftDocumentInput inner types define
    struct Binary {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8c2432;
        ::ll::UntypedStorage<8, 16> mUnk863df5;
        // NOLINTEND

    public:
        // prevent constructor by default
        Binary& operator=(Binary const&);
        Binary(Binary const&);
        Binary();
    };

    struct NoPayloadCheck {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbde5d3;
    ::ll::UntypedStorage<8, 24>  mUnkfdcb9e;
    ::ll::UntypedStorage<8, 32>  mUnkf632a0;
    ::ll::UntypedStorage<8, 104> mUnk556446;
    ::ll::UntypedStorage<8, 80>  mUnk5f5319;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftDocumentInput& operator=(MinecraftDocumentInput const&);
    MinecraftDocumentInput(MinecraftDocumentInput const&);
    MinecraftDocumentInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SemVersion version() const /*override*/;

    virtual ::Puv::Input::Data data() const /*override*/;

    virtual ::Puv::Logger const& getErrors() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftDocumentInput(
        ::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck,
        ::SemVersion const& minModernVersion,
        ::std::string       data
    );

    MCNAPI
    MinecraftDocumentInput(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);

    MCNAPI MinecraftDocumentInput(
        ::std::string_view payloadKey,
        ::SemVersion       minModernVersion,
        ::SemVersion       formatVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> payload
    );

    MCNAPI void init(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck,
        ::SemVersion const& minModernVersion,
        ::std::string       data
    );

    MCNAPI void* $ctor(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);

    MCNAPI void* $ctor(
        ::std::string_view payloadKey,
        ::SemVersion       minModernVersion,
        ::SemVersion       formatVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> payload
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SemVersion $version() const;

    MCNAPI ::Puv::Input::Data $data() const;

    MCNAPI ::Puv::Logger const& $getErrors() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Resources
