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
    // vIndex: 1
    virtual ::std::string asString() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value asJsonValue() const /*override*/;

    // vIndex: 3
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    // vIndex: 0
    virtual ~TextObjectLocalizedTextWithParams() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextObjectLocalizedTextWithParams(::std::string text, ::std::vector<::std::string> const& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string text, ::std::vector<::std::string> const& params);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $asString() const;

    MCAPI ::Json::Value $asJsonValue() const;

    MCAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
