#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class ITextObject {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITextObject() = default;

    // vIndex: 1
    virtual ::std::string asString() const = 0;

    // vIndex: 2
    virtual ::Json::Value asJsonValue() const = 0;

    // vIndex: 3
    virtual ::Json::Value resolve(::ResolveData const&) const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& RAW_TEXT_OBJECT_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_TEXT_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_TRANSLATE_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_WITH_KEY();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
