#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectRoot : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk76d2b9;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectRoot& operator=(TextObjectRoot const&);
    TextObjectRoot(TextObjectRoot const&);
    TextObjectRoot();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectRoot() /*override*/;

    // vIndex: 3
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    // vIndex: 1
    virtual ::std::string asString() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value asJsonValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::string> asStringVector() const;

    MCNAPI ::TextObjectRoot& operator=(::TextObjectRoot&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;

    MCNAPI ::std::string $asString() const;

    MCNAPI ::Json::Value $asJsonValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
