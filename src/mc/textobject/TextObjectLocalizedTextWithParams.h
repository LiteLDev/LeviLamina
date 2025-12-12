#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedTextWithParams : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb39e21;
    ::ll::UntypedStorage<8, 8>  mUnk313cc5;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectLocalizedTextWithParams& operator=(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string asString() const /*override*/;

    virtual ::Json::Value asJsonValue() const /*override*/;

    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    virtual ~TextObjectLocalizedTextWithParams() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextObjectLocalizedTextWithParams(::std::string text, ::std::vector<::std::string> const& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string text, ::std::vector<::std::string> const& params);
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
