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

class AppExtensionsNonOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkda9c78;
    // NOLINTEND

public:
    // prevent constructor by default
    AppExtensionsNonOwner& operator=(AppExtensionsNonOwner const&);
    AppExtensionsNonOwner(AppExtensionsNonOwner const&);
    AppExtensionsNonOwner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> tryGetExtensions() const /*override*/;

    // vIndex: 0
    virtual ~AppExtensionsNonOwner() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> $tryGetExtensions() const;
    // NOLINTEND

};

}
