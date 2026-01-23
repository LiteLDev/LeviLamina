#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledStreamWriter {
public:
    // StyledStreamWriter inner types define
    using ChildValues = ::std::vector<::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> childValues_;
    ::ll::TypedStorage<8, 8, ::std::ostream*>               document_;
    ::ll::TypedStorage<8, 32, ::std::string>                indentString_;
    ::ll::TypedStorage<4, 4, int>                           rightMargin_;
    ::ll::TypedStorage<8, 32, ::std::string>                indentation_;
    ::ll::TypedStorage<1, 1, bool>                          addChildValues_;
    // NOLINTEND

public:
    // prevent constructor by default
    StyledStreamWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StyledStreamWriter(::std::string indentation);

    MCAPI void unindent();

    MCAPI void write(::std::ostream& out, ::Json::Value const& root);

    MCAPI void writeArrayValue(::Json::Value const& value);

    MCAPI void writeValue(::Json::Value const& value);

    MCAPI ~StyledStreamWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string indentation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Json
