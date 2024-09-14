#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/MCCATEGORY.h"

struct MCRESULT {
public:
    bool                  mSuccess;
    enum class MCCATEGORY mCategory;
    ushort                mCode;

    operator bool() const noexcept { return mSuccess; } // NOLINT

public:
    // NOLINTBEGIN
    MCAPI int getFullCode() const;

    MCAPI bool isSuccess() const;

    MCAPI bool operator==(struct MCRESULT const& other) const;

    // NOLINTEND
};

MCAPI extern struct MCRESULT const MCRESULT_NoTargetsFound;

MCAPI extern struct MCRESULT const MCRESULT_CommandExecIncomplete;

MCAPI extern struct MCRESULT const MCRESULT_InvalidCommandCall;

MCAPI extern struct MCRESULT const MCRESULT_AllTargetsWillFail;

MCAPI extern struct MCRESULT const MCRESULT_NoChatPermissions;

MCAPI extern struct MCRESULT const MCRESULT_ChatMuted;

MCAPI extern struct MCRESULT const MCRESULT_TooManyPendingRequests;

MCAPI extern struct MCRESULT const MCRESULT_ExpectedRequestMsg;

MCAPI extern struct MCRESULT const MCRESULT_MustSpecifyVersion;

MCAPI extern struct MCRESULT const MCRESULT_CommandsDisabled;

MCAPI extern struct MCRESULT const MCRESULT_NotEnoughPermissions;

MCAPI extern struct MCRESULT const MCRESULT_MalformedRequest;

MCAPI extern struct MCRESULT const MCRESULT_CommandStepDone;

MCAPI extern struct MCRESULT const MCRESULT_CommandRequestInitiated;

MCAPI extern struct MCRESULT const MCRESULT_FailedToParseCommand;

MCAPI extern struct MCRESULT const MCRESULT_NewCommandVersionAvailable;

MCAPI extern struct MCRESULT const MCRESULT_ExecutionFail;

MCAPI extern struct MCRESULT const MCRESULT_Success;

MCAPI extern struct MCRESULT const MCRESULT_InvalidCommandContext;

MCAPI extern struct MCRESULT const MCRESULT_CommandStepFail;

MCAPI extern struct MCRESULT const MCRESULT_CommandNotFound;

MCAPI extern struct MCRESULT const MCRESULT_CommandVersionMismatch;

MCAPI extern struct MCRESULT const MCRESULT_InvalidOverloadSyntax;

MCAPI extern struct MCRESULT const MCRESULT_VersionMismatch;

MCAPI extern struct MCRESULT const MCRESULT_EncryptionRequired;

MCAPI extern struct MCRESULT const MCRESULT_FailWithoutFailMsg;
