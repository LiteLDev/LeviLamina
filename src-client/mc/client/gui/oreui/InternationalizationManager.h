#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/BreakIteratorBoundary.h"
#include "mc/external/gameface/cohtml/IInternationalizationManager.h"
#include "mc/external/gameface/cohtml/TextDirection.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::i18n { class IBreakIterator; }
// clang-format on

namespace OreUI {

class InternationalizationManager : public ::cohtml::IInternationalizationManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InternationalizationManager() /*override*/ = default;

    virtual ::cohtml::i18n::IBreakIterator*
    CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary type) /*override*/;

    virtual ::cohtml::i18n::TextDirection ComputeBaseDirection(char const* utfBuffer, uint size) const /*override*/;

    virtual ::cohtml::i18n::TextDirection ComputeTextDirection(
        char const*                                                  utfBuffer,
        uint                                                         size,
        ::cohtml::IInternationalizationManager::TextDirectionResult* result
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void SetDictionaryData(::std::vector<uchar> data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cohtml::i18n::IBreakIterator* $CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary type);

    MCAPI ::cohtml::i18n::TextDirection $ComputeBaseDirection(char const* utfBuffer, uint size) const;

    MCAPI ::cohtml::i18n::TextDirection $ComputeTextDirection(
        char const*                                                  utfBuffer,
        uint                                                         size,
        ::cohtml::IInternationalizationManager::TextDirectionResult* result
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
