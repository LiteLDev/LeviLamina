#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BatchKey.h"

// auto generated forward declare list
// clang-format off
struct CustomRenderComponent;
struct SpriteComponent;
struct TextComponent;
// clang-format on

class ComponentRenderBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::BatchKey>                             mBatchKey;
    ::ll::TypedStorage<1, 1, bool>                                     mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                     mRequiresPreRenderSetup;
    ::ll::TypedStorage<4, 4, int>                                      mRenderPass;
    ::ll::TypedStorage<8, 24, ::std::vector<::CustomRenderComponent*>> mCustomRenderInstances;
    ::ll::TypedStorage<8, 24, ::std::vector<::SpriteComponent*>>       mSpriteInstances;
    ::ll::TypedStorage<8, 24, ::std::vector<::TextComponent*>>         mTextInstances;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentRenderBatch& operator=(ComponentRenderBatch const&);
    ComponentRenderBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentRenderBatch(::ComponentRenderBatch const&);

    MCAPI ~ComponentRenderBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentRenderBatch const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
