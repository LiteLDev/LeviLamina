#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

class SerializedSkin {
public:
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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
