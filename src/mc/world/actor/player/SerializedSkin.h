#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class SerializedSkin {

public:
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBVSubClientConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const&); // NOLINT
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin const&); // NOLINT
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI SerializedSkin(); // NOLINT
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI SerializedSkin(class ConnectionRequest const&); // NOLINT
    /**
     * @symbol ??0SerializedSkin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SerializedSkin(class SerializedSkin&&); // NOLINT
    /**
     * @symbol
     * ?getName\@SerializedSkin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?isTrustedSkin\@SerializedSkin\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const; // NOLINT
    /**
     * @symbol ??4SerializedSkin\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SerializedSkin& operator=(class SerializedSkin const&); // NOLINT
    /**
     * @symbol
     * ?read\@SerializedSkin\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol
     * ?setArmSizeFromString\@SerializedSkin\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setArmSizeFromString(std::string const&); // NOLINT
    /**
     * @symbol ?setIsTrustedSkin\@SerializedSkin\@\@QEAAX_N\@Z
     */
    MCAPI void setIsTrustedSkin(bool); // NOLINT
    /**
     * @symbol ?updateGeometryName\@SerializedSkin\@\@QEAAXXZ
     */
    MCAPI void updateGeometryName(); // NOLINT
    /**
     * @symbol ?write\@SerializedSkin\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const; // NOLINT
    /**
     * @symbol ??1SerializedSkin\@\@QEAA\@XZ
     */
    MCAPI ~SerializedSkin(); // NOLINT
    /**
     * @symbol ?createTrustedDefaultSerializedSkin\@SerializedSkin\@\@SA?AV1\@XZ
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin(); // NOLINT
    /**
     * @symbol ?isSkinDisabled\@SerializedSkin\@\@SA_NAEBV1\@AEBVLevelData\@\@\@Z
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const&, class LevelData const&); // NOLINT
};
