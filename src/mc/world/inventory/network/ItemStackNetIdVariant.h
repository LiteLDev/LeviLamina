#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemStackLegacyRequestIdTag.h"
#include "mc/world/item/components/ItemStackNetIdTag.h"
#include "mc/world/item/components/ItemStackRequestIdTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"

struct ItemStackNetIdVariant {

public:
    std::variant<
        TypedServerNetId<struct ItemStackNetIdTag, int, 0>,
        TypedClientNetId<struct ItemStackRequestIdTag, int, 0>,
        TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0>>
        id;

    // NOLINTBEGIN
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant&&);
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const&);
    /**
     * @symbol ??0ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ItemStackNetIdVariant();
    /**
     * @symbol
     * ?deserialize\@ItemStackNetIdVariant\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> deserialize(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?hasServerNetId\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool hasServerNetId() const;
    /**
     * @symbol ?isValid\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant&&);
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant const&);
    /**
     * @symbol ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant& operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    /**
     * @symbol
     * ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant&
    operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&);
    /**
     * @symbol ??8ItemStackNetIdVariant\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ItemStackNetIdVariant const&) const;
    /**
     * @symbol ?serialize\@ItemStackNetIdVariant\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void serialize(class BinaryStream&) const;
    /**
     * @symbol
     * ?toString\@ItemStackNetIdVariant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol
     * ?tryGetServerNetId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;
    /**
     * @symbol ??1ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackNetIdVariant();
    // NOLINTEND
};
