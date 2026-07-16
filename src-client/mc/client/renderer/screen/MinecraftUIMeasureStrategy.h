#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMeasureStrategy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class ProfanityContext;
struct CaretMeasureData;
struct MeasureResult;
struct TextMeasureData;
// clang-format on

class MinecraftUIMeasureStrategy : public ::UIMeasureStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const> mProfanityContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUIMeasureStrategy() /*override*/;

    virtual ::MeasureResult measureText(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        int                                                      maxHeight,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const /*override*/;

    virtual ::MeasureResult measureTextHeight(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const /*override*/;

    virtual ::MeasureResult measureTextWidth(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const /*override*/;

    virtual ::std::string filterProfanityFromText(::std::string const& text, bool const allowFilterOverride) const
        /*override*/;

    virtual bool isProfanityFilterActive() const /*override*/;

    virtual uint64 getCaretIndexFromPixelCoords(
        ::std::string const&           text,
        ::glm::vec2 const&             xyPosition,
        ::glm::vec2 const&             ownerSize,
        ::gsl::not_null<::FontHandle*> fontHandle,
        ::TextMeasureData const&       textData,
        ::CaretMeasureData const&      caretData
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::MeasureResult _measureText(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& fontHandle,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        int                                                      maxHeight,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MeasureResult $measureText(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        int                                                      maxHeight,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const;

    MCAPI ::MeasureResult $measureTextHeight(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const;

    MCAPI ::MeasureResult $measureTextWidth(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const;

    MCAPI ::std::string $filterProfanityFromText(::std::string const& text, bool const allowFilterOverride) const;

    MCAPI bool $isProfanityFilterActive() const;

    MCAPI uint64 $getCaretIndexFromPixelCoords(
        ::std::string const&           text,
        ::glm::vec2 const&             xyPosition,
        ::glm::vec2 const&             ownerSize,
        ::gsl::not_null<::FontHandle*> fontHandle,
        ::TextMeasureData const&       textData,
        ::CaretMeasureData const&      caretData
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
