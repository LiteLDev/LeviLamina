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

    virtual ::cohtml::i18n::IBreakIterator* CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary) /*override*/;

    virtual ::cohtml::i18n::TextDirection ComputeBaseDirection(char const*, uint) const /*override*/;

    virtual ::cohtml::i18n::TextDirection
    ComputeTextDirection(char const*, uint, ::cohtml::IInternationalizationManager::TextDirectionResult*) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
