#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { struct PackAssociations; }
// clang-format on

namespace PackCommand {

class IResourceRepositories {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResourceRepositories() = default;

    // vIndex: 1
    virtual void fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PackCommand
