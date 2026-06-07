#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedText : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk617c6e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectLocalizedText& operator=(TextObjectLocalizedText const&);
    TextObjectLocalizedText(TextObjectLocalizedText const&);
    TextObjectLocalizedText();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string asString() const /*override*/;

    virtual ::Json::Value asJsonValue() const /*override*/;

    virtual ::Json::Value resolve(::ResolveData const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextObjectLocalizedText(::std::string text);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string text);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $asString() const;

    MCNAPI ::Json::Value $asJsonValue() const;

    MCNAPI ::Json::Value $resolve(::ResolveData const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
