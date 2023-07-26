#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"

struct ItemStackNetIdVariant {

public:
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant&&); // NOLINT
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const&); // NOLINT
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ItemStackNetIdVariant(); // NOLINT
    /**
     * @symbol
     * ?deserialize\@ItemStackNetIdVariant\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> deserialize(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ?hasServerNetId\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool hasServerNetId() const; // NOLINT
    /**
     * @symbol ?isValid\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant&&); // NOLINT
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant const&); // NOLINT
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant&
    operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&); // NOLINT
    /**
     * @symbol
     * ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant&
    operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&); // NOLINT
    /**
     * @symbol ??8ItemStackNetIdVariant\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ItemStackNetIdVariant const&) const; // NOLINT
    /**
     * @symbol ?serialize\@ItemStackNetIdVariant\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void serialize(class BinaryStream&) const; // NOLINT
    /**
     * @symbol
     * ?toString\@ItemStackNetIdVariant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol
     * ?tryGetServerNetId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const; // NOLINT
    /**
     * @symbol ??1ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackNetIdVariant(); // NOLINT
};
