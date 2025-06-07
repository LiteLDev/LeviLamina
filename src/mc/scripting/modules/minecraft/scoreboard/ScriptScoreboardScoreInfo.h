#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardScoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk99b93b;
    ::ll::UntypedStorage<4, 4>  mUnk19624a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardScoreInfo& operator=(ScriptScoreboardScoreInfo const&);
    ScriptScoreboardScoreInfo(ScriptScoreboardScoreInfo const&);
    ScriptScoreboardScoreInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptScoreboardScoreInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
