#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Gameface { class IResourceHandler; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

struct ResourceHandlerFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                               mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem>>         mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>              mAppPackageFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>              mRawFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>     mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::unique_ptr<::Gameface::IResourceHandler>(
            ::OreUI::RegisterResourceHandlersArguments const&,
            ::OreUI::GeometryProtocolType
        )>>
        mCreateGeometryAtlasResourceHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceHandlerFactoryArguments& operator=(ResourceHandlerFactoryArguments const&);
    ResourceHandlerFactoryArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceHandlerFactoryArguments(::OreUI::ResourceHandlerFactoryArguments const&);

    MCAPI ~ResourceHandlerFactoryArguments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ResourceHandlerFactoryArguments const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
