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
    virtual ~IResourceRepositories() = default;

    virtual void fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>&) = 0;

    virtual void removePacks(::std::vector<::gsl::not_null<::Pack const*>> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PackCommand
