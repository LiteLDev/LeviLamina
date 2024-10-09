#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/services/persona/ArmSize.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/json/Value.h"
#include "mc/world/actor/player/AnimatedImageData.h"
#include "mc/world/actor/player/SerializedPersonaPieceHandle.h"


// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

class SerializedSkin {
public:
    enum class TrustedSkinFlag : schar {
        Unset = 0x0,
        False = 0x1,
        True  = 0x2,
    };

    std::string                                          mId;
    std::string                                          mPlayFabId;
    std::string                                          mFullId;
    std::string                                          mResourcePatch;
    std::string                                          mDefaultGeometryName;
    mce::Image                                           mSkinImage;
    mce::Image                                           mCapeImage;
    std::vector<AnimatedImageData>                       mSkinAnimatedImages;
    Json::Value                                          mGeometryData;
    SemVersion                                           mGeometryDataEngineVersion;
    Json::Value                                          mGeometryDataMutable;
    std::string                                          mAnimationData;
    std::string                                          mCapeId;
    std::vector<SerializedPersonaPieceHandle>            mPersonaPieces;
    persona::ArmSize::Type                               mArmSizeType;
    std::unordered_map<persona::PieceType, TintMapColor> mPieceTintColors;
    mce::Color                                           mSkinColor;
    TrustedSkinFlag                                      mIsTrustedSkin;
    bool                                                 mIsPremium;
    bool                                                 mIsPersona;
    bool                                                 mIsPersonaCapeOnClassicSkin;
    bool                                                 mIsPrimaryUser;
    bool                                                 mOverridesPlayerAppearance;

    // NOLINTBEGIN
    MCAPI SerializedSkin();

    MCAPI explicit SerializedSkin(class ConnectionRequest const& request);

    MCAPI SerializedSkin(class SerializedSkin&& rhs);

    MCAPI SerializedSkin(class SerializedSkin const& rhs);

    MCAPI explicit SerializedSkin(class SubClientConnectionRequest const& request);

    MCAPI float getAnimationFrames(::persona::AnimatedTextureType animationType) const;

    MCAPI std::string const& getName() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI class SerializedSkin& operator=(class SerializedSkin const& rhs);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI void setIsTrustedSkin(bool isTrustedSkin);

    MCAPI void updateGeometryName();

    MCAPI bool useBlinkingAnimation() const;

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~SerializedSkin();

    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();

    MCAPI static bool isSkinDisabled(class SerializedSkin const& skin, class LevelData const& levelData);

    // NOLINTEND
};
