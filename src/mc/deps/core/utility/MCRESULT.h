#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/MCCATEGORY.h"

struct MCRESULT {
public:
    bool         mSuccess;
    ::MCCATEGORY mCategory;
    ushort       mCode;

    operator bool() const noexcept { return mSuccess; } // NOLINT

public:
    // NOLINTBEGIN
    MCAPI int getFullCode() const;

    MCAPI bool isSuccess() const;

    MCAPI bool operator==(struct MCRESULT const& other) const;

    // NOLINTEND
};

MCAPI MCRESULT const& MCRESULT_NoTargetsFound();

MCAPI MCRESULT const& MCRESULT_CommandExecIncomplete();

MCAPI MCRESULT const& MCRESULT_InvalidCommandCall();

MCAPI MCRESULT const& MCRESULT_AllTargetsWillFail();

MCAPI MCRESULT const& MCRESULT_NoChatPermissions();

MCAPI MCRESULT const& MCRESULT_ChatMuted();

MCAPI MCRESULT const& MCRESULT_TooManyPendingRequests();

MCAPI MCRESULT const& MCRESULT_ExpectedRequestMsg();

MCAPI MCRESULT const& MCRESULT_MustSpecifyVersion();

MCAPI MCRESULT const& MCRESULT_CommandsDisabled();

MCAPI MCRESULT const& MCRESULT_NotEnoughPermissions();

MCAPI MCRESULT const& MCRESULT_MalformedRequest();

MCAPI MCRESULT const& MCRESULT_CommandStepDone();

MCAPI MCRESULT const& MCRESULT_CommandRequestInitiated();

MCAPI MCRESULT const& MCRESULT_FailedToParseCommand();

MCAPI MCRESULT const& MCRESULT_NewCommandVersionAvailable();

MCAPI MCRESULT const& MCRESULT_ExecutionFail();

MCAPI MCRESULT const& MCRESULT_Success();

MCAPI MCRESULT const& MCRESULT_InvalidCommandContext();

MCAPI MCRESULT const& MCRESULT_CommandStepFail();

MCAPI MCRESULT const& MCRESULT_CommandNotFound();

MCAPI MCRESULT const& MCRESULT_CommandVersionMismatch();

MCAPI MCRESULT const& MCRESULT_InvalidOverloadSyntax();

MCAPI MCRESULT const& MCRESULT_VersionMismatch();

MCAPI MCRESULT const& MCRESULT_EncryptionRequired();

MCAPI MCRESULT const& MCRESULT_FailWithoutFailMsg();
