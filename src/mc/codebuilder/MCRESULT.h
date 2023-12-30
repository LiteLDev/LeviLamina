#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/MCCATEGORY.h"

struct MCRESULT {
public:
    bool                  mSuccess;
    enum class MCCATEGORY mCategory;
    ushort                mCode;

    operator bool() const { return mSuccess; } // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ?getFullCode@MCRESULT@@QEBAHXZ
    MCAPI int getFullCode() const;

    // symbol: ?isSuccess@MCRESULT@@QEBA_NXZ
    MCAPI bool isSuccess() const;

    // symbol: ??8MCRESULT@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct MCRESULT const& other) const;

    // NOLINTEND
};

// symbol: ?MCRESULT_NoTargetsFound@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_NoTargetsFound;

// symbol: ?MCRESULT_CommandExecIncomplete@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandExecIncomplete;

// symbol: ?MCRESULT_InvalidCommandCall@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_InvalidCommandCall;

// symbol: ?MCRESULT_AllTargetsWillFail@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_AllTargetsWillFail;

// symbol: ?MCRESULT_NoChatPermissions@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_NoChatPermissions;

// symbol: ?MCRESULT_ChatMuted@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_ChatMuted;

// symbol: ?MCRESULT_TooManyPendingRequests@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_TooManyPendingRequests;

// symbol: ?MCRESULT_ExpectedRequestMsg@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_ExpectedRequestMsg;

// symbol: ?MCRESULT_MustSpecifyVersion@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_MustSpecifyVersion;

// symbol: ?MCRESULT_CommandsDisabled@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandsDisabled;

// symbol: ?MCRESULT_NotEnoughPermissions@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_NotEnoughPermissions;

// symbol: ?MCRESULT_MalformedRequest@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_MalformedRequest;

// symbol: ?MCRESULT_CommandStepDone@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandStepDone;

// symbol: ?MCRESULT_CommandRequestInitiated@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandRequestInitiated;

// symbol: ?MCRESULT_FailedToParseCommand@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_FailedToParseCommand;

// symbol: ?MCRESULT_NewCommandVersionAvailable@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_NewCommandVersionAvailable;

// symbol: ?MCRESULT_ExecutionFail@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_ExecutionFail;

// symbol: ?MCRESULT_Success@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_Success;

// symbol: ?MCRESULT_InvalidCommandContext@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_InvalidCommandContext;

// symbol: ?MCRESULT_CommandStepFail@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandStepFail;

// symbol: ?MCRESULT_CommandNotFound@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandNotFound;

// symbol: ?MCRESULT_CommandVersionMismatch@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_CommandVersionMismatch;

// symbol: ?MCRESULT_InvalidOverloadSyntax@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_InvalidOverloadSyntax;

// symbol: ?MCRESULT_VersionMismatch@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_VersionMismatch;

// symbol: ?MCRESULT_EncryptionRequired@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_EncryptionRequired;

// symbol: ?MCRESULT_FailWithoutFailMsg@@3UMCRESULT@@B
MCAPI extern struct MCRESULT const MCRESULT_FailWithoutFailMsg;
