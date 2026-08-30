#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class ICommandGroup; }
// clang-format on

namespace OreUI::Debug {

class IBindingsDataProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindingsDataProvider() /*override*/;

    virtual ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const = 0;

    virtual ::std::vector<::OreUI::Detail::ICommandGroup*> getCommands() const = 0;
    // NOLINTEND
};

} // namespace OreUI::Debug
