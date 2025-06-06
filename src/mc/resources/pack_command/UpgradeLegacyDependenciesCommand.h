#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/pack_command/PackCommand.h"
#include "mc/resources/pack_command/UpgradeLegacyDependencies.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct PackIdVersion;
// clang-format on

namespace PackCommand {

struct UpgradeLegacyDependenciesCommand : public ::PackCommand::PackCommand<::PackCommand::UpgradeLegacyDependencies> {
public:
    // prevent constructor by default
    UpgradeLegacyDependenciesCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpgradeLegacyDependenciesCommand(
        ::Bedrock::NonOwnerPointer<::Pack> pack,
        ::std::vector<::PackIdVersion>     newDependencies
    );

    MCNAPI ~UpgradeLegacyDependenciesCommand();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::Pack> pack, ::std::vector<::PackIdVersion> newDependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
