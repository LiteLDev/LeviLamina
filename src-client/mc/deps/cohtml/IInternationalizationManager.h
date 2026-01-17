#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/BreakIteratorBoundary.h"
#include "mc/deps/cohtml/TextDirection.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::i18n { class IBreakIterator; }
// clang-format on

namespace cohtml {

class IInternationalizationManager {
public:
    // IInternationalizationManager inner types declare
    // clang-format off
    struct TextDirectionResult;
    // clang-format on

    // IInternationalizationManager inner types define
    struct TextDirectionResult {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~TextDirectionResult() = default;

        virtual void AddSubsection(uint, uint, ::cohtml::i18n::TextDirection) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInternationalizationManager() = default;

    virtual ::cohtml::i18n::IBreakIterator* CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary);

    virtual ::cohtml::i18n::TextDirection ComputeBaseDirection(char const*, uint) const;

    virtual ::cohtml::i18n::TextDirection
    ComputeTextDirection(char const*, uint, ::cohtml::IInternationalizationManager::TextDirectionResult*) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
