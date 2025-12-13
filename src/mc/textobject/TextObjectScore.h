#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectScore : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71dadc;
    ::ll::UntypedStorage<8, 32> mUnk8e694b;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectScore& operator=(TextObjectScore const&);
    TextObjectScore(TextObjectScore const&);
    TextObjectScore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string asString() const /*override*/;

    virtual ::Json::Value asJsonValue() const /*override*/;

    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    virtual ~TextObjectScore() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& RAW_TEXT_SCORE_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_SCORE_NAME_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_SCORE_OBJECTIVE_KEY();

    MCNAPI static ::std::string const& RAW_TEXT_SCORE_STAR();
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
