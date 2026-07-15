#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectSelector : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1bac3d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectSelector& operator=(TextObjectSelector const&);
    TextObjectSelector(TextObjectSelector const&);
    TextObjectSelector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string asString() const /*override*/;

    virtual ::Json::Value asJsonValue() const /*override*/;

    virtual ::Json::Value resolve(::ResolveData const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
