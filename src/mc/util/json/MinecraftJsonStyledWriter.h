#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class MinecraftJsonStyledWriter : public ::Json::Writer {
public:
    // MinecraftJsonStyledWriter inner types define
    using ChildValues = ::std::vector<::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mChildValues;
    ::ll::TypedStorage<8, 32, ::std::string>                mDocument;
    ::ll::TypedStorage<8, 32, ::std::string>                mIndentString;
    ::ll::TypedStorage<4, 4, int>                           mRightMargin;
    ::ll::TypedStorage<4, 4, int>                           mIndentSize;
    ::ll::TypedStorage<1, 1, bool>                          mAddChildValues;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftJsonStyledWriter() /*override*/ = default;

    virtual ::std::string write(::Json::Value const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Json
