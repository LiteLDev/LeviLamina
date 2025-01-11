#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk366791;
    ::ll::UntypedStorage<4, 4>  mUnkd45199;
    ::ll::UntypedStorage<8, 32> mUnk25ae24;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommand& operator=(ScriptCommand const&);
    ScriptCommand(ScriptCommand const&);
    ScriptCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCommand(::std::string const& commandString);

    MCFOLD ::std::string getMessages() const;

    MCFOLD int getSuccessCount() const;

    MCAPI void setOutput(int successCount, ::std::string&& messages);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& commandString);
    // NOLINTEND
};
