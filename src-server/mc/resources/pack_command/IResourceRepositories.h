#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pack;
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

    // vIndex: 2
    virtual void removePacks(::std::vector<::gsl::not_null<::Pack const*>> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PackCommand
