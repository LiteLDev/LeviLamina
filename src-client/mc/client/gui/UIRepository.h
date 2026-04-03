#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/UITextureInfoPtr.h"
#include "mc/client/gui/interface/IUIRepository.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class ResourceLoader;
class UITextureInfo;
// clang-format on

class UIRepository : public ::IUIRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::ResourceLocation, ::UITextureInfo>> mLoadedUITextureInfo;
    ::ll::TypedStorage<8, 8, ::ResourceLoader&>                                mResourceLoader;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::UITextureInfoPtr*>>       mRegisteredPtrs;
    // NOLINTEND

public:
    // prevent constructor by default
    UIRepository& operator=(UIRepository const&);
    UIRepository(UIRepository const&);
    UIRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIRepository() /*override*/;

    virtual void clearLoadedUITextureInfo() /*override*/;

    virtual void reloadGroup() /*override*/;

    virtual void addRef(::UITextureInfoPtr& ptr) /*override*/;

    virtual void removeRef(::UITextureInfoPtr& ptr) /*override*/;

    virtual ::UITextureInfoPtr
    getUITextureInfoPtr(::ResourceLocation const& resourceLocation, bool forceReload) /*override*/;

    virtual ::UITextureInfo*
    getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload, bool loadIfNeeded) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadUITextureInfo(::ResourceLocation const& resourceLocation, ::UITextureInfo& uiTextureInfo) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clearLoadedUITextureInfo();

    MCAPI void $reloadGroup();

    MCAPI void $addRef(::UITextureInfoPtr& ptr);

    MCAPI void $removeRef(::UITextureInfoPtr& ptr);

    MCAPI ::UITextureInfoPtr $getUITextureInfoPtr(::ResourceLocation const& resourceLocation, bool forceReload);

    MCAPI ::UITextureInfo*
    $getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload, bool loadIfNeeded);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
