/**
 * @file  SerializedSkin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SerializedSkin.
 *
 */
class SerializedSkin {

#define AFTER_EXTRA
// Add Member There
    char filler[620];
#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBVSubClientConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    /**
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class ConnectionRequest const &);
    /**
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin const &);
    /**
     * @symbol  ??0SerializedSkin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin &&);
    /**
     * @symbol  ??0SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI SerializedSkin();
    /**
     * @symbol  ?getAnimationFrames\@SerializedSkin\@\@QEBAMW4AnimatedTextureType\@persona\@\@\@Z
     */
    MCAPI float getAnimationFrames(enum class persona::AnimatedTextureType) const;
    /**
     * @symbol  ?getName\@SerializedSkin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?isTrustedSkin\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol  ??4SerializedSkin\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    /**
     * @symbol  ?read\@SerializedSkin\@\@QEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?setIsTrustedSkin\@SerializedSkin\@\@QEAAX_N\@Z
     */
    MCAPI void setIsTrustedSkin(bool);
    /**
     * @symbol  ?updateGeometryName\@SerializedSkin\@\@QEAAXXZ
     */
    MCAPI void updateGeometryName();
    /**
     * @symbol  ?useBlinkingAnimation\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool useBlinkingAnimation() const;
    /**
     * @symbol  ?write\@SerializedSkin\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol  ??1SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI ~SerializedSkin();
    /**
     * @symbol  ?createTrustedDefaultSerializedSkin\@SerializedSkin\@\@SA?AV1\@XZ
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();
    /**
     * @symbol  ?isSkinDisabled\@SerializedSkin\@\@SA_NAEBV1\@AEBVLevelData\@\@\@Z
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const &, class LevelData const &);

};