#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

namespace AppExtensions {

class AppExtensionsOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk773566;
    // NOLINTEND

public:
    // prevent constructor by default
    AppExtensionsOwner& operator=(AppExtensionsOwner const&);
    AppExtensionsOwner(AppExtensionsOwner const&);
    AppExtensionsOwner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> tryGetExtensions() const /*override*/;

    // vIndex: 0
    virtual ~AppExtensionsOwner() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
