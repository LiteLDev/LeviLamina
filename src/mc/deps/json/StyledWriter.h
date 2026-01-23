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
    virtual ~StyledWriter() /*override*/;

    virtual ::std::string write(::Json::Value const& root) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StyledWriter();

    MCAPI void indent();

    MCAPI void unindent();

    MCAPI void writeArrayValue(::Json::Value const& value);

    MCAPI void writeIndent();

    MCAPI void writeValue(::Json::Value const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $write(::Json::Value const& root);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Json
