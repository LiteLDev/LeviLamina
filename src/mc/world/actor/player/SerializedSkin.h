#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
class SerializedSkinImpl;
// clang-format on

class SerializedSkin {
public:
    // SerializedSkin inner types define
    using SerializedSkinWrapper = ::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>>>
        mSkinImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedSkin(SerializedSkin const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedSkin();

    MCAPI float getAnimationFrames(::persona::AnimatedTextureType animationType) const;

    MCFOLD ::SerializedSkin& operator=(::SerializedSkin&&);

    MCFOLD ::SerializedSkin& operator=(::SerializedSkin const&);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI ~SerializedSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
