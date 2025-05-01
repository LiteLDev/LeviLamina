#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/json/Value.h"
#include "mc/platform/Result.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class BinaryStream;
class ConnectionRequest;
class ReadOnlyBinaryStream;
class SerializedPersonaPieceHandle;
class SubClientConnectionRequest;
class TintMapColor;
// clang-format on

class SerializedSkin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPlayFabId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mFullId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mResourcePatch;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mDefaultGeometryName;
    ::ll::TypedStorage<8, 48, ::mce::Image>                                               mSkinImage;
    ::ll::TypedStorage<8, 48, ::mce::Image>                                               mCapeImage;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimatedImageData>>                         mSkinAnimatedImages;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                              mGeometryData;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                                         mGeometryDataMinEngineVersion;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                              mGeometryDataMutable;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mAnimationData;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mCapeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedPersonaPieceHandle>>              mPersonaPieces;
    ::ll::TypedStorage<8, 8, ::persona::ArmSize::Type>                                    mArmSizeType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::persona::PieceType, ::TintMapColor>> mPieceTintColors;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                               mSkinColor;
    ::ll::TypedStorage<1, 1, ::TrustedSkinFlag>                                           mIsTrustedSkin;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPremium;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPersona;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPersonaCapeOnClassicSkin;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPrimaryUser;
    ::ll::TypedStorage<1, 1, bool>                                                        mOverridesPlayerAppearance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedSkin();

    MCAPI SerializedSkin(::SerializedSkin&&);

    MCAPI explicit SerializedSkin(::ConnectionRequest const& request);

    MCAPI explicit SerializedSkin(::SubClientConnectionRequest const& request);

    MCAPI SerializedSkin(::SerializedSkin const& rhs);

    MCAPI float getAnimationFrames(::persona::AnimatedTextureType animationType) const;

    MCAPI ::SerializedSkin& operator=(::SerializedSkin&&);

    MCAPI ::SerializedSkin& operator=(::SerializedSkin const& rhs);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI void setArmSizeFromString(::std::string const& armSizeStr);

    MCAPI void updateGeometryName();

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~SerializedSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SerializedSkin&&);

    MCAPI void* $ctor(::ConnectionRequest const& request);

    MCAPI void* $ctor(::SubClientConnectionRequest const& request);

    MCAPI void* $ctor(::SerializedSkin const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
