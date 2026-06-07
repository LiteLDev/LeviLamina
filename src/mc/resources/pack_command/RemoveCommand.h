#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/PackCommand.h"
#include "mc/resources/pack_command/RemovePack.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace PackCommand {

struct RemoveCommand : public ::PackCommand::PackCommand<::PackCommand::RemovePack> {
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RemoveCommand();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit RemoveCommand(::std::shared_ptr<::Pack> pack);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::std::shared_ptr<::Pack> pack);
#endif
    // NOLINTEND
};

} // namespace PackCommand
