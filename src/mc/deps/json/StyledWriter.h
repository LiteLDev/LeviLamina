#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledWriter : public ::Json::Writer {
public:
    // StyledWriter inner types define
    using ChildValues = ::std::vector<::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> childValues_;
    ::ll::TypedStorage<8, 32, ::std::string>                document_;
    ::ll::TypedStorage<8, 32, ::std::string>                indentString_;
    ::ll::TypedStorage<4, 4, int>                           rightMargin_;
    ::ll::TypedStorage<4, 4, int>                           indentSize_;
    ::ll::TypedStorage<1, 1, bool>                          addChildValues_;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StyledWriter() /*override*/;

    // vIndex: 1
    virtual ::std::string write(::Json::Value const& root) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void indent();

    MCNAPI bool isMultineArray(::Json::Value const& value);

    MCNAPI void pushValue(::std::string const& value);

    MCNAPI void unindent();

    MCNAPI void writeArrayValue(::Json::Value const& value);

    MCNAPI void writeIndent();

    MCNAPI void writeValue(::Json::Value const& value);

    MCNAPI void writeWithIndent(::std::string const& value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $write(::Json::Value const& root);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Json
