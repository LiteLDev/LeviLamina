#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::i18n {

class IBreakIterator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBreakIterator();

    virtual void Destroy() = 0;

    virtual void ClearText();

    virtual int GetCurrentPosition();

    virtual int MoveToCandidateAfter(int);

    virtual int MoveToCandidateBefore(int index) = 0;

    virtual int MoveToNext();

    virtual int MoveToPrevious();

    virtual int ResetToBeginning();

    virtual int ResetToEnd();

    virtual void SetText(char const*, uint);

    virtual void SetTextRef(char const* utfBuffer) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ClearText();

    MCNAPI int $GetCurrentPosition();

    MCNAPI int $MoveToCandidateAfter(int);

    MCNAPI int $MoveToNext();

    MCNAPI int $MoveToPrevious();

    MCNAPI int $ResetToBeginning();

    MCNAPI int $ResetToEnd();

    MCNAPI void $SetText(char const*, uint);
    // NOLINTEND
};

} // namespace cohtml::i18n
