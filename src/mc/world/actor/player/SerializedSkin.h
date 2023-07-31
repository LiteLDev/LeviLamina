#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class SerializedSkin {

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBVSubClientConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const&);
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin const&);
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI SerializedSkin();
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class ConnectionRequest const&);
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin&&);
    /**
     * @symbol ?createTrustedDefaultSerializedSkin\@SerializedSkin\@\@SA?AV1\@XZ
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();
    /**
     * @symbol
     * ?getName\@SerializedSkin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?isSkinDisabled\@SerializedSkin\@\@SA_NAEBV1\@AEBVLevelData\@\@\@Z
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const&, class LevelData const&);
    /**
     * @symbol ?isTrustedSkin\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol ??4SerializedSkin\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SerializedSkin& operator=(class SerializedSkin const&);
    /**
     * @symbol
     * ?read\@SerializedSkin\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @symbol
     * ?setArmSizeFromString\@SerializedSkin\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setArmSizeFromString(std::string const&);
    /**
     * @symbol ?setIsTrustedSkin\@SerializedSkin\@\@QEAAX_N\@Z
     */
    MCAPI void setIsTrustedSkin(bool);
    /**
     * @symbol ?updateGeometryName\@SerializedSkin\@\@QEAAXXZ
     */
    MCAPI void updateGeometryName();
    /**
     * @symbol ?write\@SerializedSkin\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
    /**
     * @symbol ??1SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI ~SerializedSkin();
    // NOLINTEND
};
