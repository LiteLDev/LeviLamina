#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IResourceRepositories.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { struct PackAssociations; }
// clang-format on

namespace PackCommand {

class RepositoryImpl : public ::PackCommand::IResourceRepositories {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd44f1b;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryImpl& operator=(RepositoryImpl const&);
    RepositoryImpl(RepositoryImpl const&);
    RepositoryImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void
    fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>& packs) /*override*/;

    // vIndex: 0
    virtual ~RepositoryImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>& packs);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PackCommand
