#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
// clang-format on

class ConstCompositeSceneStackView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const> mMainStack;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const> mClientInstanceStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstCompositeSceneStackView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConstCompositeSceneStackView(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const& clientInstanceStack
    );

    MCAPI ::std::string getTopScreenName() const;

    MCAPI ~ConstCompositeSceneStackView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const& clientInstanceStack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
