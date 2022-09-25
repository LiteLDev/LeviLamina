/**
 * @file  SerializedSkin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1600472838
     * @symbol ??0SerializedSkin@@QEAA@AEBVSubClientConnectionRequest@@@Z
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    /**
     * @hash   -1407556522
     * @symbol ??0SerializedSkin@@QEAA@AEBVConnectionRequest@@@Z
     */
    MCAPI SerializedSkin(class ConnectionRequest const &);
    /**
     * @hash   -299545903
     * @symbol ??0SerializedSkin@@QEAA@AEBV0@@Z
     */
    MCAPI SerializedSkin(class SerializedSkin const &);
    /**
     * @hash   -629855941
     * @symbol ??0SerializedSkin@@QEAA@$$QEAV0@@Z
     */
    MCAPI SerializedSkin(class SerializedSkin &&);
    /**
     * @hash   -730782163
     * @symbol ??0SerializedSkin@@QEAA@XZ
     */
    MCAPI SerializedSkin();
    /**
     * @hash   -1412470127
     * @symbol ?getAnimationFrames@SerializedSkin@@QEBAMW4AnimatedTextureType@persona@@@Z
     */
    MCAPI float getAnimationFrames(enum persona::AnimatedTextureType) const;
    /**
     * @hash   -1386450932
     * @symbol ?getName@SerializedSkin@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   1327086450
     * @symbol ?isTrustedSkin@SerializedSkin@@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @hash   1441590644
     * @symbol ??4SerializedSkin@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    /**
     * @hash   -1037713557
     * @symbol ?read@SerializedSkin@@QEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1803956864
     * @symbol ?setIsTrustedSkin@SerializedSkin@@QEAAX_N@Z
     */
    MCAPI void setIsTrustedSkin(bool);
    /**
     * @hash   -121784891
     * @symbol ?updateGeometryName@SerializedSkin@@QEAAXXZ
     */
    MCAPI void updateGeometryName();
    /**
     * @hash   2000924826
     * @symbol ?useBlinkingAnimation@SerializedSkin@@QEBA_NXZ
     */
    MCAPI bool useBlinkingAnimation() const;
    /**
     * @hash   1078726410
     * @symbol ?write@SerializedSkin@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   -80354725
     * @symbol ??1SerializedSkin@@QEAA@XZ
     */
    MCAPI ~SerializedSkin();
    /**
     * @hash   1719986608
     * @symbol ?createTrustedDefaultSerializedSkin@SerializedSkin@@SA?AV1@XZ
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();
    /**
     * @hash   -895042736
     * @symbol ?isSkinDisabled@SerializedSkin@@SA_NAEBV1@AEBVLevelData@@@Z
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const &, class LevelData const &);

};