#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class UITextureInfo;
class UITextureInfoPtr;
// clang-format on

class IUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IUIRepository inner types define
    using UITextureInfoMap = ::std::map<::ResourceLocation, ::UITextureInfo>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clearLoadedUITextureInfo() = 0;

    virtual void reloadGroup() = 0;

    virtual void addRef(::UITextureInfoPtr& ptr) = 0;

    virtual void removeRef(::UITextureInfoPtr& ptr) = 0;

    virtual ::UITextureInfoPtr getUITextureInfoPtr(::ResourceLocation const& resourceLocation, bool forceReload) = 0;

    virtual ::UITextureInfo*
    getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload, bool loadIfNeeded) = 0;

    virtual ~IUIRepository() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
