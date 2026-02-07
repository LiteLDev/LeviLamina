#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ConstCompositeSceneStackView.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
// clang-format on

class CompositeSceneStackView {
public:
    // CompositeSceneStackView inner types define
    using VoidSceneVisitor = ::brstd::function_ref<void(::AbstractScene&)>;

    using BoolSceneVisitor = ::brstd::function_ref<bool(::AbstractScene&)>;

    using BoolConstSceneVisitor = ::brstd::function_ref<bool(::AbstractScene const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>> mMainStack;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>> mClientInstanceStack;
    ::ll::TypedStorage<8, 48, ::ConstCompositeSceneStackView>               mConstView;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeSceneStackView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompositeSceneStackView(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& clientInstanceStack
    );

    MCAPI ~CompositeSceneStackView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& clientInstanceStack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
