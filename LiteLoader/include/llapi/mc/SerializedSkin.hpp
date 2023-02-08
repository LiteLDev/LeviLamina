/**
 * @file  SerializedSkin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   975284678
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBVSubClientConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    /**
     * @hash   -2032760058
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class ConnectionRequest const &);
    /**
     * @hash   -924749439
     * @symbol  ??0SerializedSkin\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin const &);
    /**
     * @hash   -1645702133
     * @symbol  ??0SerializedSkin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin &&);
    /**
     * @hash   -478508131
     * @symbol  ??0SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI SerializedSkin();
    /**
     * @hash   -2037673663
     * @symbol  ?getAnimationFrames\@SerializedSkin\@\@QEBAMW4AnimatedTextureType\@persona\@\@\@Z
     */
    MCAPI float getAnimationFrames(enum class persona::AnimatedTextureType) const;
    /**
     * @hash   -1280187396
     * @symbol  ?getName\@SerializedSkin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   701882914
     * @symbol  ?isTrustedSkin\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @hash   816417860
     * @symbol  ??4SerializedSkin\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    /**
     * @hash   -1662917093
     * @symbol  ?read\@SerializedSkin\@\@QEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1866006784
     * @symbol  ?setIsTrustedSkin\@SerializedSkin\@\@QEAAX_N\@Z
     */
    MCAPI void setIsTrustedSkin(bool);
    /**
     * @hash   -746788539
     * @symbol  ?updateGeometryName\@SerializedSkin\@\@QEAAXXZ
     */
    MCAPI void updateGeometryName();
    /**
     * @hash   1375875050
     * @symbol  ?useBlinkingAnimation\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool useBlinkingAnimation() const;
    /**
     * @hash   453676634
     * @symbol  ?write\@SerializedSkin\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   172380587
     * @symbol  ??1SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI ~SerializedSkin();
    /**
     * @hash   1094783072
     * @symbol  ?createTrustedDefaultSerializedSkin\@SerializedSkin\@\@SA?AV1\@XZ
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();
    /**
     * @hash   -1520246272
     * @symbol  ?isSkinDisabled\@SerializedSkin\@\@SA_NAEBV1\@AEBVLevelData\@\@\@Z
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const &, class LevelData const &);

};