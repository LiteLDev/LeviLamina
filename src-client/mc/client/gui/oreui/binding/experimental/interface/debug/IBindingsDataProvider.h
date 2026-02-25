#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Debug { struct QueryInformation; }
namespace OreUI::Experimental::Detail { class ICommandGroup; }
// clang-format on

namespace OreUI::Experimental::Debug {

class IBindingsDataProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindingsDataProvider() /*override*/ = default;

    virtual ::std::vector<::OreUI::Experimental::Debug::QueryInformation> getQueryInformation() const = 0;

    virtual ::std::vector<::OreUI::Experimental::Detail::ICommandGroup*> getCommands() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental::Debug
