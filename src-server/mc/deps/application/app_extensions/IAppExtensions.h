#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IGameModuleExtensions; }
namespace AppExtensions { class ITestExtensions; }
// clang-format on

namespace AppExtensions {

class IAppExtensions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::ITestExtensions> tryGetTestExtensions() const = 0;

    // vIndex: 2
    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IGameModuleExtensions> tryGetGameModuleExtensions() const = 0;

    // vIndex: 0
    virtual ~IAppExtensions() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
