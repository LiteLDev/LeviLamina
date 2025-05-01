#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectText : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk212749;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectText& operator=(TextObjectText const&);
    TextObjectText(TextObjectText const&);
    TextObjectText();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string asString() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value asJsonValue() const /*override*/;

    // vIndex: 3
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    // vIndex: 0
    virtual ~TextObjectText() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value asJsonValue(::std::string const& textField);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $asString() const;

    MCNAPI ::Json::Value $asJsonValue() const;

    MCNAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
