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
    virtual ~UIRepository() /*override*/ = default;

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
    MCNAPI explicit UIRepository(::ResourceLoader& resourceLoader);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLoader& resourceLoader);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clearLoadedUITextureInfo();

    MCNAPI void $reloadGroup();

    MCNAPI void $addRef(::UITextureInfoPtr& ptr);

    MCNAPI void $removeRef(::UITextureInfoPtr& ptr);

    MCNAPI ::UITextureInfoPtr $getUITextureInfoPtr(::ResourceLocation const& resourceLocation, bool forceReload);

    MCNAPI ::UITextureInfo*
    $getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload, bool loadIfNeeded);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
