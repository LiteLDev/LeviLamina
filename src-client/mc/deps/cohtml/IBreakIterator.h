#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::i18n {

class IBreakIterator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBreakIterator() = default;

    virtual void Destroy() = 0;

    virtual void ClearText();

    virtual int GetCurrentPosition();

    virtual int MoveToCandidateAfter(int);

    virtual int MoveToCandidateBefore(int) = 0;

    virtual int MoveToNext();

    virtual int MoveToPrevious();

    virtual int ResetToBeginning();

    virtual int ResetToEnd();

    virtual void SetText(char const*, uint);

    virtual void SetTextRef(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml::i18n
