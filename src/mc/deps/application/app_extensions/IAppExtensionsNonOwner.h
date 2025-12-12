#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

namespace AppExtensions {

class IAppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppExtensionsNonOwner() = default;

    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> tryGetExtensions() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AppExtensions
