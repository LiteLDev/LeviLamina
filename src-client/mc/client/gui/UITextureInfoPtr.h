#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUIRepository;
class UITextureInfo;
// clang-format on

class UITextureInfoPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UITextureInfo const*>                       mUITextureInfo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUIRepository>> mGroup;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                          mResourceLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    UITextureInfoPtr& operator=(UITextureInfoPtr const&);
    UITextureInfoPtr(UITextureInfoPtr const&);
    UITextureInfoPtr();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UITextureInfoPtr();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UITextureInfoPtr(
        ::Bedrock::NonOwnerPointer<::IUIRepository> const& group,
        ::ResourceLocation const&                          resourceLocation,
        bool                                               forceReload
    );

    MCAPI ::UITextureInfoPtr& _move(::UITextureInfoPtr&& moved);

    MCFOLD ::UITextureInfo const* getUITextureInfo() const;

    MCFOLD explicit operator bool() const;

    MCAPI ::UITextureInfoPtr& operator=(::UITextureInfoPtr&& moved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::IUIRepository> const& group,
        ::ResourceLocation const&                          resourceLocation,
        bool                                               forceReload
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
