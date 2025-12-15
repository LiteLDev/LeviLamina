#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
struct CaretMeasureData;
struct MeasureResult;
struct TextMeasureData;
// clang-format on

class UIMeasureStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIMeasureStrategy() = default;

    virtual ::MeasureResult measureText(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const&,
        ::std::string const&,
        int,
        int,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const = 0;

    virtual ::MeasureResult measureTextHeight(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const&,
        ::std::string const&,
        int,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const = 0;

    virtual ::MeasureResult measureTextWidth(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const&,
        ::std::string const&,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const = 0;

    virtual ::std::string filterProfanityFromText(::std::string const&, bool const) const = 0;

    virtual bool isProfanityFilterActive() const = 0;

    virtual uint64 getCaretIndexFromPixelCoords(
        ::std::string const&,
        ::glm::vec2 const&,
        ::glm::vec2 const&,
        ::gsl::not_null<::FontHandle*>,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
