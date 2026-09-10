#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IScriptStatPublisher;
// clang-format on

class ScriptDiagnostics : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk2a3204;
    ::ll::UntypedStorage<8, 48> mUnk4f1ee0;
    ::ll::UntypedStorage<8, 48> mUnka6faff;
    ::ll::UntypedStorage<8, 48> mUnk682d22;
    ::ll::UntypedStorage<8, 24> mUnkd1118e;
    ::ll::UntypedStorage<8, 24> mUnk5448c7;
    ::ll::UntypedStorage<8, 24> mUnk5d35e1;
    ::ll::UntypedStorage<1, 1>  mUnk145097;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDiagnostics() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDiagnostics(::std::vector<::gsl::not_null<::IScriptStatPublisher*>>&& publishers);

    MCNAPI void collectStats(uint64 currentTick);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::gsl::not_null<::IScriptStatPublisher*>>&& publishers);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
